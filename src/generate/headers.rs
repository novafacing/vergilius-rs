use anyhow::{anyhow, Result};
use cargo_metadata::MetadataCommand;
use petgraph::{algo::toposort, visit::Dfs, Graph};
use reqwest::blocking::get;
use serde::Deserialize;
use serde_yaml::from_reader;
use std::{
    collections::{HashMap, HashSet},
    fmt::Write,
    fs::{create_dir_all, read_dir, write, File, OpenOptions},
    path::Path,
    process::Command,
};
use zip::ZipArchive;

pub const KERNELS_DATA_GITHUB_URL_BASE: &str = "https://github.com/VergiliusProject/kernels-data";
pub const KERNELS_DATA_VERSION: &str = "master";

#[derive(Debug, Clone, Deserialize, PartialEq, Eq)]
pub struct Os {
    family: String,
    osname: String,
    buildnumber: String,
    arch: String,
    timestamp: isize,
    types: Vec<Type>,
}

#[derive(Debug, Clone, Deserialize, PartialEq, Eq)]
pub enum Kind {
    STRUCT,
    ENUM,
    UNION,
    ARRAY,
    BASE,
    POINTER,
    FUNCTION,
}

#[derive(Debug, Clone, Deserialize, PartialEq, Eq)]
pub struct Type {
    #[serde(default)]
    name: Option<String>,
    id: isize,
    kind: Kind,
    sizeof: isize,
    #[serde(rename = "isVolatile", default)]
    is_volatile: bool,
    #[serde(rename = "isConst", default)]
    is_const: bool,
    #[serde(default)]
    data: Vec<TData>,
}

impl Type {
    pub fn c_member_type(&self, member_name: String, types: &Vec<Type>) -> Result<String> {
        let name = self.name();

        Ok(match self.kind {
            Kind::STRUCT => {
                if name == "__unnamed" {
                    // We output the struct inline
                    let mut struct_c = String::new();
                    struct_c.push_str("struct {\n");
                    for (i, d) in self
                        .data
                        .chunk_by(|a, b| {
                            a.offset == b.offset
                                && !a.name.as_ref().is_some_and(|n| n.contains(":"))
                        })
                        .enumerate()
                    {
                        if d.len() == 1 {
                            let ty = types
                                .iter()
                                .find(|t| t.id == d[0].id)
                                .ok_or_else(|| anyhow!("Failed to find type"))?;
                            struct_c.push_str(&format!(
                                "    {}; // offset: {:#x} ordinal: {:#x}\n",
                                ty.c_member_type(
                                    d[0].name
                                        .as_ref()
                                        .unwrap_or(&format!("__field_{}", i))
                                        .to_string(),
                                    types
                                )?,
                                d[0].offset,
                                d[0].ordinal
                            ));
                        } else {
                            // We have an inline union (same offset with multiple fields)
                            struct_c.push_str("    union {\n");
                            for (j, f) in d.iter().enumerate() {
                                let ty = types
                                    .iter()
                                    .find(|t| t.id == f.id)
                                    .ok_or_else(|| anyhow!("Failed to find type"))?;
                                struct_c.push_str(&format!(
                                    "        {}; // offset: {:#x} ordinal: {:#x}\n",
                                    ty.c_member_type(
                                        f.name
                                            .as_ref()
                                            .unwrap_or(&format!("__field_{}_{}", i, j))
                                            .to_string(),
                                        types
                                    )?,
                                    f.offset,
                                    f.ordinal
                                ));
                            }
                            struct_c.push_str("    };\n");
                        }
                    }
                    struct_c.push_str(&format!("}} {}", member_name));
                    struct_c
                } else {
                    format!("struct {} {}", name, member_name)
                }
            }
            Kind::ENUM => {
                format!("enum {} {}", name, member_name)
            }
            Kind::UNION => {
                if name == "__unnamed" {
                    // We output the union inline
                    let mut union_c = String::new();
                    union_c.push_str("union {\n");
                    for (i, d) in self.data.iter().enumerate() {
                        let ty = types
                            .iter()
                            .find(|t| t.id == d.id)
                            .ok_or_else(|| anyhow!("Failed to find type"))?;
                        union_c.push_str(&format!(
                            "    {}; // offset: {:#x} ordinal: {:#x}\n",
                            ty.c_member_type(
                                d.name
                                    .as_ref()
                                    .unwrap_or(&format!("__field_{}", i))
                                    .to_string(),
                                types
                            )?,
                            d.offset,
                            d.ordinal
                        ));
                    }
                    union_c.push_str(&format!("}} {}", member_name));
                    union_c
                } else {
                    format!("union {} {}", name, member_name)
                }
            }
            Kind::ARRAY => {
                // The element type is data[0]
                let mut element = types
                    .iter()
                    .find(|t| t.id == self.data[0].id)
                    .ok_or_else(|| anyhow!("Failed to find type"))?;
                let mut sizes = vec![self.sizeof / element.sizeof];

                while element.kind == Kind::ARRAY {
                    let sizeof = element.sizeof;
                    element = types
                        .iter()
                        .find(|t| t.id == element.data[0].id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    sizes.push(sizeof / element.sizeof);
                }

                // Check if the element is a function pointer
                let is_fptr = if element.kind == Kind::POINTER {
                    let mut pointee = types
                        .iter()
                        .find(|t| t.id == element.data[0].id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;

                    while pointee.kind == Kind::POINTER {
                        pointee = types
                            .iter()
                            .find(|t| t.id == pointee.data[0].id)
                            .ok_or_else(|| anyhow!("Failed to find type"))?;
                    }

                    pointee.kind == Kind::FUNCTION
                } else {
                    false
                };

                if is_fptr {
                    element.c_member_type(
                        format!(
                            "{}{}",
                            member_name,
                            sizes.iter().fold(String::new(), |mut o, s| {
                                // NOTE: Writes to a string cannot fail
                                let _ = write!(o, "[{}]", s);
                                o
                            })
                        ),
                        types,
                    )?
                } else {
                    format!(
                        "{} {}{}",
                        element.c_member_type("".to_string(), types)?,
                        member_name,
                        sizes.iter().fold(String::new(), |mut o, s| {
                            // NOTE: Writes to a string cannot fail
                            let _ = write!(o, "[{}]", s);
                            o
                        })
                    )
                }
            }
            Kind::BASE => {
                format!("{} {}", name, member_name)
            }
            Kind::POINTER => {
                // The pointee type is data[0]
                let mut pointee = types
                    .iter()
                    .find(|t| t.id == self.data[0].id)
                    .ok_or_else(|| anyhow!("Failed to find type"))?;
                let mut pointer_depth: usize = 1;

                while pointee.kind == Kind::POINTER {
                    pointee = types
                        .iter()
                        .find(|t| t.id == pointee.data[0].id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;

                    pointer_depth += 1;
                }

                match pointee.kind {
                    Kind::FUNCTION => {
                        // Function pointer syntax
                        let return_ty = if pointee.data.is_empty() {
                            "void".to_string()
                        } else {
                            let ty = types
                                .iter()
                                .find(|t| t.id == pointee.data[0].id)
                                .ok_or_else(|| anyhow!("Failed to find type"))?;
                            ty.c_member_type("".to_string(), types)?
                        };

                        let mut proto = format!(
                            "{} ({}{})(",
                            return_ty,
                            (0..pointer_depth).map(|_| "*").collect::<String>(),
                            member_name
                        );

                        for (i, d) in pointee.data.iter().skip(1).enumerate() {
                            let ty = types
                                .iter()
                                .find(|t| t.id == d.id)
                                .ok_or_else(|| anyhow!("Failed to find type"))?;
                            proto.push_str(&format!(
                                "{}{}",
                                ty.c_member_type("".to_string(), types)?,
                                if i == pointee.data.len() - 2 {
                                    ""
                                } else {
                                    ", "
                                }
                            ));
                        }

                        proto.push(')');

                        proto
                    }
                    _ => {
                        format!(
                            "{}{} {}",
                            pointee.c_member_type("".to_string(), types)?,
                            (0..pointer_depth).map(|_| "*").collect::<String>(),
                            member_name
                        )
                    }
                }
            }
            Kind::FUNCTION => {
                // A function pointer type

                // The first data is the return type (if there is a first data, otherwise it is void) and the rest are arguments
                let return_ty = if self.data.is_empty() {
                    "void".to_string()
                } else {
                    let ty = types
                        .iter()
                        .find(|t| t.id == self.data[0].id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    ty.c_member_type("".to_string(), types)?
                };

                let mut proto = format!("{} (*{})(", return_ty, member_name);

                for (i, d) in self.data.iter().skip(1).enumerate() {
                    let ty = types
                        .iter()
                        .find(|t| t.id == d.id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    proto.push_str(&format!(
                        "{}{}",
                        ty.c_member_type("".to_string(), types)?,
                        if i == self.data.len() - 2 { "" } else { ", " }
                    ));
                }

                proto.push(')');

                proto
            }
        })
    }

    pub fn name(&self) -> String {
        if let Some(name) = self.name.as_ref() {
            // Rough check if the name is a valid C identifier (only a-zA-Z0-9_)
            if name.chars().all(|c| c.is_alphanumeric() || c == '_') {
                name.clone()
            } else {
                format!("__anon_{}", self.id)
            }
        } else {
            format!("__anon_{}", self.id)
        }
    }

    pub fn to_c(&self, types: &Vec<Type>) -> Result<Option<String>> {
        let name = self.name();
        match self.kind {
            Kind::STRUCT => {
                let mut struct_c = String::new();
                struct_c.push_str(&format!("// {:#x} bytes (sizeof)\n", self.sizeof));
                struct_c.push_str(&format!("typedef struct {} {{\n", name));

                // Group bitfields with the same offset together so we can work out the
                let data = self
                    .data
                    .chunk_by(|a, b| {
                        a.offset == b.offset
                            && a.name.as_ref().is_some_and(|n| n.contains(":"))
                            && b.name.as_ref().is_some_and(|n| n.contains(":"))
                    })
                    .collect::<Vec<_>>();

                // Now if we have multiple field groups with the same offset, they are in a union

                for (union_group_index, union_group) in
                    data.chunk_by(|a, b| a[0].offset == b[0].offset).enumerate()
                {
                    if union_group.len() > 1 {
                        struct_c.push_str("union {\n");
                    }

                    for bitfield_group in union_group.iter() {
                        for (bitfield_index, field) in bitfield_group.iter().enumerate() {
                            // Emit the field(s if they are bitfields)
                            let ty = types
                                .iter()
                                .find(|t| t.id == field.id)
                                .ok_or_else(|| anyhow!("Failed to find type"))?;

                            let member_type = ty.c_member_type(
                                field
                                    .name
                                    .as_ref()
                                    .unwrap_or(&format!("__field_{}", union_group_index))
                                    .to_string(),
                                types,
                            )?;

                            struct_c.push_str(&format!(
                                "{}; // offset: {:#x} ({}) ordinal: {:#x} ({}) {}\n",
                                member_type,
                                field.offset,
                                field.offset,
                                field.ordinal,
                                field.ordinal,
                                if bitfield_group.len() > 1 {
                                    format!("bitfield entry {}", bitfield_index)
                                } else {
                                    "".to_string()
                                }
                            ));
                        }
                    }

                    if union_group.len() > 1 {
                        struct_c.push_str("};\n");
                    }
                }

                struct_c.push_str(&format!("}} {};\n", name));

                Ok(Some(struct_c))
            }
            Kind::ENUM => {
                let mut enum_c = String::new();
                enum_c.push_str(&format!("typedef enum {} {{\n", name));
                for (i, d) in self.data.iter().enumerate() {
                    enum_c.push_str(&format!(
                        "    {} = {}, // ordinal: {:#x}\n",
                        d.name.as_ref().unwrap_or(&format!("__field_{}", i)),
                        d.offset,
                        d.ordinal
                    ));
                }
                enum_c.push_str(&format!("}} {};\n", name));
                Ok(Some(enum_c))
            }
            Kind::UNION => {
                let mut union_c = String::new();
                union_c.push_str(&format!("// {:#x} bytes (sizeof)\n", self.sizeof));
                union_c.push_str(&format!("typedef union {} {{\n", name));
                for (i, d) in self.data.iter().enumerate() {
                    let ty = types
                        .iter()
                        .find(|t| t.id == d.id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    union_c.push_str(&format!(
                        "    {}; // offset: {:#x} ordinal: {:#x}\n",
                        ty.c_member_type(
                            d.name
                                .as_ref()
                                .unwrap_or(&format!("__field_{}", i))
                                .to_string(),
                            types
                        )?,
                        d.offset,
                        d.ordinal
                    ));
                }
                union_c.push_str(&format!("}} {};\n", name));
                Ok(Some(union_c))
            }
            Kind::ARRAY => {
                // Arrays are defined as members inline
                Ok(None)
            }
            Kind::BASE => {
                match name.as_str() {
                    "ULONGLONG" => Ok(Some("typedef unsigned long long ULONGLONG;\n".to_string())),
                    "LONGLONG" => Ok(Some("typedef long long LONGLONG;\n".to_string())),
                    "ULONG" => Ok(Some("typedef unsigned long ULONG;\n".to_string())),
                    "LONG" => Ok(Some("typedef long LONG;\n".to_string())),
                    "USHORT" => Ok(Some("typedef unsigned short USHORT;\n".to_string())),
                    "SHORT" => Ok(Some("typedef short SHORT;\n".to_string())),
                    "UCHAR" => Ok(Some("typedef unsigned char UCHAR;\n".to_string())),
                    "CHAR" => Ok(Some("typedef char CHAR;\n".to_string())),
                    "WCHAR" => Ok(Some("typedef unsigned short WCHAR;\n".to_string())),
                    "VOID" => Ok(Some("typedef void VOID;\n".to_string())),
                    "HRESULT" => Ok(Some("typedef unsigned int HRESULT;\n".to_string())),
                    // No need to redefine double
                    "double" => Ok(None),
                    _ => Ok(Some(format!("typedef void {};\n", name))),
                }
            }
            Kind::POINTER => {
                // Pointers are defined as members inline
                Ok(None)
            }
            Kind::FUNCTION => {
                // A function pointer type

                // The first data is the return type (if there is a first data, otherwise it is void) and the rest are arguments
                let return_ty = if self.data.is_empty() {
                    "void".to_string()
                } else {
                    let ty = types
                        .iter()
                        .find(|t| t.id == self.data[0].id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    ty.c_member_type("".to_string(), types)?
                };

                let mut proto = format!("typedef {} (*{})(", return_ty, name);

                for (i, d) in self.data.iter().skip(1).enumerate() {
                    let ty = types
                        .iter()
                        .find(|t| t.id == d.id)
                        .ok_or_else(|| anyhow!("Failed to find type"))?;
                    proto.push_str(&format!(
                        "{}{}",
                        ty.c_member_type("".to_string(), types)?,
                        if i == self.data.len() - 2 { "" } else { ", " }
                    ));
                }

                proto.push_str(");\n");

                Ok(Some(proto))
            }
        }
    }
}

#[derive(Debug, Clone, Deserialize, PartialEq, Eq)]
pub struct TData {
    #[serde(default)]
    name: Option<String>,
    id: isize,
    offset: isize,
    ordinal: isize,
}

fn kernels_data_url() -> String {
    format!(
        "{}/archive/{}.zip",
        KERNELS_DATA_GITHUB_URL_BASE, KERNELS_DATA_VERSION
    )
}

/// Download a URL to a destination, using a blocking request
fn download(url: &str, destination: &Path) -> Result<()> {
    let mut response = get(url)?;
    let mut file = OpenOptions::new()
        .write(true)
        .create(true)
        .truncate(true)
        .open(destination)?;
    response.copy_to(&mut file)?;
    Ok(())
}

/// Extract a zip file at a path to a destination
fn extract_zip(archive: &Path, destination: &Path) -> Result<()> {
    let archive = File::open(archive)?;
    let mut archive = ZipArchive::new(archive)?;
    archive.extract(destination)?;
    Ok(())
}

fn to_c(data: &Os) -> Result<String> {
    // First, we need to make a graph of all the types and their relationships such that we can
    // output the types in order so that we don't have any undefined types.
    let mut types = data.types.clone();
    types.sort_by_key(|t| t.id);

    let mut node_ids = HashMap::new();
    let mut dependency_graph = Graph::new();

    for t in &types {
        node_ids.insert(t.id, dependency_graph.add_node(t.id));
    }

    for t in &types {
        for d in &t.data {
            // Don't add any self edges
            if t.id == d.id {
                continue;
            }

            // The type depends on the data entry
            dependency_graph.add_edge(
                *node_ids.get(&d.id).ok_or_else(|| anyhow!("No node id"))?,
                *node_ids.get(&t.id).ok_or_else(|| anyhow!("No node id"))?,
                (),
            );
        }

        if t.kind == Kind::POINTER {
            // A pointer type depends on the pointee type, but this relationship actually
            // gets broken usually by the toposort pruning component, we have a fixup to
            // emit pointer types to structs and unions after emitting the type itself
            dependency_graph.add_edge(
                *node_ids
                    .get(&t.data[0].id)
                    .ok_or_else(|| anyhow!("No node id"))?,
                *node_ids.get(&t.id).ok_or_else(|| anyhow!("No node id"))?,
                (),
            );
        }

        if t.kind == Kind::ARRAY {
            // An array type depends on the element type, but this relationship actually
            // gets broken usually by the toposort pruning component, we have a fixup to
            // emit array types to structs and unions after emitting the type itself
            dependency_graph.add_edge(
                *node_ids
                    .get(&t.data[0].id)
                    .ok_or_else(|| anyhow!("No node id"))?,
                *node_ids.get(&t.id).ok_or_else(|| anyhow!("No node id"))?,
                (),
            );
        }
    }

    // Any cycles are non-self cycles, and the node we get from `e` is the node with the
    // incoming cycle edge. All we need to do is remove the offending incoming edge,
    // which we can do by doing a single breadth first traversal of the graph from the
    // node with the incoming edge until we have a cycle.
    while let Err(e) = toposort(&dependency_graph, None) {
        let mut dfs = Dfs::new(&dependency_graph, e.node_id());

        while let Some(node) = dfs.next(&dependency_graph) {
            // Get the neighbors of `node`
            let neighbors = dependency_graph.neighbors(node).collect::<Vec<_>>();
            if neighbors.contains(&e.node_id()) {
                dependency_graph
                    .remove_edge(
                        dependency_graph
                            .find_edge(node, e.node_id())
                            .ok_or_else(|| anyhow!("Failed to find edge"))?,
                    )
                    .ok_or_else(|| anyhow!("Failed to remove edge"))?;
                break;
            }
        }
    }

    let mut c_file = String::new();

    let dependencies = toposort(&dependency_graph, None)
        .map_err(|_| anyhow!("Topological sort failed"))?
        .into_iter()
        .collect::<Vec<_>>();

    let mut defined = HashSet::new();

    for dependency in dependencies {
        let ty = types
            .iter()
            .find(|t| node_ids.get(&t.id).is_some_and(|n| *n == dependency))
            .ok_or_else(|| anyhow!("Failed to find type"))?;
        if !defined.contains(&ty.name()) && ty.name() != "__unnamed" {
            if let Some(ty_c) = ty.to_c(&types)? {
                c_file.push_str(&ty_c);
                c_file.push('\n');
                defined.insert(ty.name());
            }
        }
    }

    Ok(c_file)
}

pub fn generate_headers() -> Result<()> {
    let metadata = MetadataCommand::new().no_deps().exec()?;

    let package = metadata
        .packages
        .iter()
        .find(|p| p.name == "vergilius")
        .ok_or_else(|| anyhow!("Failed to find package"))?;

    let headers_dir = package
        .manifest_path
        .parent()
        .ok_or_else(|| anyhow!("Failed to get manifest path"))?
        .join("headers")
        .into_std_path_buf();

    let tmp_dir = metadata.target_directory.join("tmp").into_std_path_buf();
    let archive = tmp_dir.join(format!("{}.zip", KERNELS_DATA_VERSION));
    let src = tmp_dir.join(format!("kernels-data-{}", KERNELS_DATA_VERSION));

    if !tmp_dir.exists() {
        create_dir_all(&tmp_dir)?;
    }

    if !headers_dir.exists() {
        create_dir_all(&headers_dir)?;
    }

    if !archive.exists() {
        download(&kernels_data_url(), &archive)?;
    }

    if !src.exists() {
        extract_zip(
            &tmp_dir.join(format!("{}.zip", KERNELS_DATA_VERSION)),
            &tmp_dir,
        )?;
    }

    let yml_dir = src.join("yml");

    let data = read_dir(&yml_dir)?
        .filter_map(|entry| entry.ok())
        .filter(|entry| entry.path().extension().map_or(false, |ext| ext == "yml"))
        .map(|entry| {
            let file = File::open(entry.path())?;
            Ok(from_reader(file)?)
        })
        .collect::<Result<Vec<Os>>>()?;

    for d in data {
        let out_file = headers_dir.join(format!("bindings-{}-{}.h", d.buildnumber, d.arch));
        if !out_file.exists() {
            let c_file = to_c(&d)?;
            write(&out_file, c_file)?;
            Command::new("clang-format")
                .arg("-i")
                .arg(&out_file)
                .status()?;
        }
        break;
    }

    Ok(())
}
