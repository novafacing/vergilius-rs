use anyhow::{anyhow, Result};
use cargo_metadata::MetadataCommand;
use indoc::indoc;
use petgraph::{algo::toposort, visit::Dfs, Graph};
use regex::Regex;
use reqwest::blocking::get;
use serde::Deserialize;
use serde_yaml::from_reader;
use std::{
    collections::{HashMap, HashSet},
    fmt::{Display, Formatter, Write},
    fs::{create_dir_all, read_dir, write, File, OpenOptions},
    path::Path,
    process::Command,
};
use zip::ZipArchive;

pub const KERNELS_DATA_GITHUB_URL_BASE: &str = "https://github.com/VergiliusProject/kernels-data";
pub const KERNELS_DATA_VERSION: &str = "master";

// Writeln wrapper to string, which is infallible
macro_rules! xwriteln {
    ($($arg:tt)*) => {
        writeln!($($arg)*).unwrap()
    };
}

// Write wrapper to string, which is infallible
macro_rules! xwrite {
    ($($arg:tt)*) => {
        write!($($arg)*).unwrap()
    };
}

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
pub struct TData {
    #[serde(default)]
    name: Option<String>,
    id: isize,
    offset: isize,
    ordinal: isize,
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

#[derive(Default, Debug)]
pub struct FieldBuilder {
    name: String,
    ty: String,
    dim: String,
    retval: String,
    args: String,
    fb_offset: isize,
}

impl Display for FieldBuilder {
    fn fmt(&self, f: &mut Formatter) -> std::fmt::Result {
        if self.retval.is_empty() {
            write!(f, "{} {}{}", self.ty, self.name, self.dim)
        } else {
            write!(
                f,
                "{} ({}{}{})({})",
                self.retval, self.ty, self.name, self.dim, self.args
            )
        }
    }
}

impl FieldBuilder {
    pub fn is_top_level(indent: isize) -> bool {
        indent == 0
    }
}

pub struct Builder {
    pub types: Vec<Type>,
    pub arch: String,
}

impl Builder {
    pub fn new(types: Vec<Type>, arch: String) -> Self {
        Self { types, arch }
    }

    pub fn print_enum_fields(&self, fb: &mut FieldBuilder, t: &Type, indent: &mut isize) {
        if !t.data.is_empty() && t.sizeof != 0 {
            xwriteln!(fb.ty);
            xwriteln!(fb.ty, " {{");
            *indent += 1;

            for (i, d) in t.data.iter().enumerate() {
                if i != 0 && i != t.data.len() {
                    xwrite!(fb.ty, ",");
                }

                xwrite!(fb.ty, "\n");
                xwrite!(fb.ty, "{} = {}", d.name.as_ref().unwrap(), d.offset);
            }
            *indent -= 1;

            xwrite!(fb.ty, "\n}}");
        }
    }

    pub fn find_duplicate_indices(fields: &[TData], value: isize) -> Vec<usize> {
        let fields = fields.iter().enumerate().collect::<Vec<_>>();
        let duplicates = fields
            .chunk_by(|(_ia, a), (_ib, b)| {
                a.offset == b.offset
                    && a.name.as_ref().is_some_and(|n| n.contains(":"))
                    && b.name.as_ref().is_some_and(|n| n.contains(":"))
            })
            .filter_map(|d| (d[0].1.offset == value).then_some(d[0].0))
            .collect::<Vec<_>>();

        if duplicates.len() <= 1 {
            vec![]
        } else {
            duplicates
        }
    }

    pub fn get_size_of_union(&self, struct_fields: &[TData], duplicates: &[usize]) -> usize {
        let mut sizes = vec![0; duplicates.len() - 1];
        let mut k = 0;
        let mut i = duplicates.len() - 1;

        while i > 0 {
            let ty = self
                .types
                .iter()
                .find(|t| t.id == struct_fields[duplicates[i] - 1].id)
                .unwrap();
            sizes[k] = ty.sizeof as usize + struct_fields[duplicates[i] - 1].offset as usize;
            k += 1;
            i -= 1;
        }
        sizes.sort();
        sizes[sizes.len() - 1]
    }

    pub fn first_piece_of_struct(&self, struct_fields: &mut Vec<TData>) -> Vec<Vec<TData>> {
        let mut ret_lists = Vec::new();
        let current_field = &struct_fields[0];
        let duplicates = Self::find_duplicate_indices(struct_fields, current_field.offset);

        if duplicates.is_empty() {
            ret_lists.push(vec![struct_fields[0].clone()]);
        } else {
            let size_of_union = self.get_size_of_union(struct_fields, &duplicates);
            let max_possible_offset = size_of_union - 1;

            for j in 0..duplicates.len() - 1 {
                let mut list1 = Vec::new();
                for n in duplicates[j]..duplicates[j + 1] {
                    list1.push(struct_fields[n].clone());
                }
                ret_lists.push(list1);
            }

            let mut bottom_border = duplicates[duplicates.len() - 1];
            let mut k = bottom_border + 1;

            while k < struct_fields.len() {
                if struct_fields[k].offset as usize > max_possible_offset {
                    bottom_border = k - 1;
                    break;
                } else {
                    bottom_border += 1;
                }

                k += 1;
            }

            let mut list1 = Vec::new();

            for n in duplicates[duplicates.len() - 1]..bottom_border + 1 {
                list1.push(struct_fields[n].clone());
            }

            ret_lists.push(list1);
        }

        for m in 0..ret_lists.len() {
            for data in &ret_lists[m] {
                let pos = struct_fields.iter().position(|d| d.id == data.id).unwrap();
                struct_fields.remove(pos);
            }
        }

        ret_lists
    }

    pub fn construct_field_type(
        &self,
        current_field: &TData,
        fb: &mut FieldBuilder,
        _t: &Type,
        rp_offset: &mut isize,
        indent: &mut isize,
    ) {
        let ty = self
            .types
            .iter()
            .find(|t| t.id == current_field.id)
            .unwrap();
        let mut rp_offset = *rp_offset + current_field.offset;
        let mut field = self.recursion_processing(ty, indent, &mut rp_offset);
        field.name = current_field
            .name
            .as_ref()
            .map(String::to_string)
            .unwrap_or(format!("__anon_{}", current_field.id));
        field.fb_offset = rp_offset + current_field.offset;
        xwriteln!(fb.ty);
        xwrite!(fb.ty, "{};", field);
        // xwrite!(
        //     fb.ty,
        //     "// offset: {:#x} ({})",
        //     field.fb_offset,
        //     field.fb_offset
        // );
        xwrite!(
            fb.ty,
            "// offset: {:#x} ({})",
            current_field.offset,
            current_field.offset
        );
    }

    pub fn get_modifier(ty: &Type) -> String {
        let mut modifier = String::new();
        if ty.is_const {
            modifier.push_str("const");
        }
        if ty.is_volatile {
            if ty.is_const {
                modifier.push_str(" ");
            }
            modifier.push_str("volatile");
        }
        modifier
    }

    pub fn rec_struct_processing(
        &self,
        struct_fields: &mut Vec<TData>,
        fb: &mut FieldBuilder,
        ty: &Type,
        rp_offset: &mut isize,
        indent: &mut isize,
    ) {
        while !struct_fields.is_empty() {
            let mut returned = self.first_piece_of_struct(struct_fields);

            if returned.len() > 1 {
                xwriteln!(fb.ty);
                xwrite!(fb.ty, "union");
                xwrite!(fb.ty, "{{");
                *indent += 1;

                for each in &mut returned {
                    if each.len() > 1 {
                        xwriteln!(fb.ty);
                        xwrite!(fb.ty, "struct {{");
                        *indent += 1;
                        self.rec_struct_processing(each, fb, ty, rp_offset, indent);
                        *indent -= 1;
                        xwriteln!(fb.ty);
                        xwrite!(fb.ty, "}};");
                    } else {
                        let current_field = &each[0];
                        self.construct_field_type(current_field, fb, ty, rp_offset, indent);
                    }
                }
                *indent -= 1;
                xwriteln!(fb.ty);
                xwrite!(fb.ty, "}};");
            } else {
                let current_field = &returned[0][0];
                self.construct_field_type(current_field, fb, ty, rp_offset, indent)
            }
        }
    }

    pub fn print_struct_fields(
        &self,
        fb: &mut FieldBuilder,
        ty: &Type,
        indent: &mut isize,
        rp_offset: &mut isize,
    ) {
        if !ty.data.is_empty() && ty.sizeof != 0 {
            xwrite!(fb.ty, "{{");
            *indent += 1;
            let mut fields = ty.data.clone();

            self.rec_struct_processing(&mut fields, fb, ty, rp_offset, indent);

            xwriteln!(fb.ty);
            xwrite!(fb.ty, "}}");
            *indent -= 1;
        } else {
            xwrite!(fb.ty, "{{");
            xwrite!(fb.ty, "}}");
        }
    }

    pub fn print_union_fields(
        &self,
        fb: &mut FieldBuilder,
        ty: &Type,
        indent: &mut isize,
        rp_offset: &mut isize,
    ) {
        if !ty.data.is_empty() && ty.sizeof != 0 {
            xwriteln!(fb.ty, "{{");
            let fields = ty.data.clone();
            *indent += 1;
            let mut beginning = false;
            let last = fields.len() - 1;

            for i in 0..fields.len() {
                let ty = self.types.iter().find(|t| t.id == fields[i].id).unwrap();
                let mut field = self.recursion_processing(ty, indent, rp_offset);
                field.name = fields[i]
                    .name
                    .as_ref()
                    .map(|n| n.to_string())
                    .unwrap_or(format!("__field_{}", i));
                field.fb_offset = *rp_offset + fields[i].offset;

                if i == last {
                    if beginning {
                        xwrite!(fb.ty, "}};");
                    }

                    let mut str = String::new();
                    xwrite!(str, "{};", field);
                    // Regex replace "<.+?>" to ""
                    xwriteln!(
                        fb.ty,
                        "{} // offset: {:#x} ({})",
                        Regex::new("(<.+?>)").unwrap().replace(&str, ""),
                        field.fb_offset,
                        field.fb_offset
                    );

                    break;
                }

                if fields[i].offset == fields[i + 1].offset {
                    let mut str = String::new();
                    xwrite!(str, "{};", field);
                    xwriteln!(
                        fb.ty,
                        "{} // offset: {:#x} ({})",
                        Regex::new("(<.+?>)").unwrap().replace(&str, ""),
                        field.fb_offset,
                        field.fb_offset
                    );
                } else if fields[i].offset != fields[i + 1].offset && !beginning {
                    beginning = true;

                    let mut str = String::new();
                    xwriteln!(str, "struct {{");
                    xwrite!(str, "{};", field);
                    xwriteln!(
                        fb.ty,
                        "{} // offset: {:#x} ({})",
                        Regex::new("(<.+?>)").unwrap().replace(&str, ""),
                        field.fb_offset,
                        field.fb_offset
                    )
                } else if fields[i].offset != fields[i + 1].offset && beginning {
                    beginning = false;

                    let mut str = String::new();
                    xwrite!(str, "{};", field);
                    xwriteln!(
                        fb.ty,
                        "{} // offset: {:#x} ({})",
                        Regex::new("(<.+?>)").unwrap().replace(&str, ""),
                        field.fb_offset,
                        field.fb_offset
                    );
                    xwrite!(fb.ty, "}};");
                }
            }
            *indent -= 1;
            xwriteln!(fb.ty);
            xwrite!(fb.ty, "}}");
        }
    }

    pub fn recursion_processing(
        &self,
        ty: &Type,
        indent: &mut isize,
        rp_offset: &mut isize,
    ) -> FieldBuilder {
        match ty.kind {
            Kind::BASE => {
                if *indent != 0 {
                    let mut fb = FieldBuilder::default();
                    xwrite!(
                        fb.ty,
                        "{} {}",
                        Self::get_modifier(ty),
                        ty.name.as_ref().unwrap()
                    );
                    fb
                } else {
                    let mut fb = FieldBuilder::default();
                    match ty.name.as_ref().unwrap().as_str() {
                        "ULONGLONG" => {
                            xwriteln!(fb.ty, "typedef uint64_t ULONGLONG;");
                        }
                        "LONGLONG" => {
                            xwriteln!(fb.ty, "typedef int64_t LONGLONG;");
                        }
                        "ULONG" => {
                            xwriteln!(fb.ty, "typedef uint32_t ULONG;");
                        }
                        "LONG" => {
                            xwriteln!(fb.ty, "typedef int32_t LONG;");
                        }
                        "USHORT" => {
                            xwriteln!(fb.ty, "typedef uint16_t USHORT;");
                        }
                        "SHORT" => {
                            xwriteln!(fb.ty, "typedef int16_t SHORT;");
                        }
                        "UCHAR" => {
                            xwriteln!(fb.ty, "typedef uint8_t UCHAR;");
                        }
                        "CHAR" => {
                            xwriteln!(fb.ty, "typedef int8_t CHAR;");
                        }
                        "WCHAR" => {
                            xwriteln!(fb.ty, "typedef uint16_t WCHAR;");
                        }
                        "VOID" => {
                            xwriteln!(fb.ty, "typedef void VOID;");
                        }
                        "HRESULT" => {
                            xwriteln!(fb.ty, "typedef int32_t HRESULT;");
                        }
                        _ => {}
                    }
                    fb
                }
            }
            Kind::POINTER => {
                if *indent != 0 {
                    let ref_type = self.types.iter().find(|t| t.id == ty.data[0].id).unwrap();

                    if ref_type.kind == Kind::STRUCT
                        && ref_type.name.as_ref().is_some_and(|n| n == "<unnamed-tag>")
                    {
                        let mut fb = self.recursion_processing(ref_type, indent, rp_offset);
                        xwrite!(fb.ty, "*{}", Self::get_modifier(ty));
                        fb.fb_offset = *rp_offset;
                        return fb;
                    }

                    if ref_type.kind == Kind::STRUCT {
                        let mut fb = FieldBuilder::default();
                        xwrite!(
                            fb.ty,
                            "struct {} * {}",
                            ref_type.name.as_ref().unwrap(),
                            Self::get_modifier(ty)
                        );
                        return fb;
                    }

                    let mut fb = self.recursion_processing(ref_type, indent, rp_offset);
                    xwrite!(fb.ty, "*{}", Self::get_modifier(ty));
                    fb
                } else {
                    FieldBuilder::default()
                }
            }
            Kind::ARRAY => {
                if *indent != 0 {
                    let ref_type = self.types.iter().find(|t| t.id == ty.data[0].id).unwrap();
                    let mut fb = self.recursion_processing(ref_type, indent, rp_offset);
                    fb.dim = format!("[{}]", ty.data[0].offset) + &fb.dim;
                    fb
                } else {
                    FieldBuilder::default()
                }
            }
            Kind::FUNCTION => {
                if *indent != 0 {
                    let mut fb = FieldBuilder::default();

                    let func_components = ty.data.iter().collect::<Vec<_>>();
                    let mut counter = 0;

                    for component in &func_components {
                        let component_ty =
                            self.types.iter().find(|t| t.id == component.id).unwrap();
                        let mut fb_type =
                            self.recursion_processing(component_ty, indent, rp_offset);
                        if component.name.as_ref().is_some_and(|n| n == "return") {
                            xwrite!(fb.retval, "{}", fb_type.to_string());
                        } else {
                            fb_type.name = format!("arg{}", counter);
                            fb.args.push_str(&fb_type.to_string());
                            if counter != func_components.len() - 1 {
                                fb.args.push_str(", ");
                            }
                        }
                        counter += 1;
                    }

                    fb
                } else {
                    FieldBuilder::default()
                }
            }
            Kind::STRUCT => {
                let mut fb = FieldBuilder::default();

                if *indent == 0 {
                    xwriteln!(fb.ty, "// {:#x} ({}) bytes", ty.sizeof, ty.sizeof);
                    xwriteln!(fb.ty, "struct {}", ty.name.as_ref().unwrap());
                    self.print_struct_fields(&mut fb, ty, indent, rp_offset);
                    xwriteln!(fb.ty, ";");
                } else if ty.name.as_ref().is_some_and(|n| n == "<unnamed-tag>")
                    || ty.name.as_ref().is_some_and(|n| n == "__unnamed")
                {
                    xwrite!(fb.ty, "struct");
                    self.print_struct_fields(&mut fb, ty, indent, rp_offset);
                } else {
                    xwrite!(
                        fb.ty,
                        "{} struct {}",
                        Self::get_modifier(ty),
                        ty.name.as_ref().unwrap()
                    );
                }

                fb
            }
            Kind::ENUM => {
                let mut fb = FieldBuilder::default();

                if *indent == 0 {
                    xwriteln!(fb.ty, "// {:#x} ({}) bytes", ty.sizeof, ty.sizeof);
                    xwrite!(fb.ty, "enum {}", ty.name.as_ref().unwrap());
                    self.print_enum_fields(&mut fb, ty, indent);
                    xwriteln!(fb.ty, ";");
                } else if ty.name.as_ref().is_some_and(|n| n == "<unnamed-tag>")
                    || ty.name.as_ref().is_some_and(|n| n == "__unnamed")
                {
                    xwrite!(fb.ty, "enum");
                    self.print_enum_fields(&mut fb, ty, indent);
                } else {
                    xwrite!(
                        fb.ty,
                        "enum {} {}",
                        Self::get_modifier(ty),
                        ty.name.as_ref().unwrap()
                    );
                }

                fb
            }
            Kind::UNION => {
                let mut fb = FieldBuilder::default();

                if *indent == 0 {
                    xwriteln!(fb.ty, "// {:#x} ({}) bytes", ty.sizeof, ty.sizeof);
                    xwrite!(fb.ty, "union {}", ty.name.as_ref().unwrap());
                    self.print_union_fields(&mut fb, ty, indent, rp_offset);
                    xwriteln!(fb.ty, ";");
                } else if ty.name.as_ref().is_some_and(|n| n == "<unnamed-tag>")
                    || ty.name.as_ref().is_some_and(|n| n == "__unnamed")
                {
                    xwrite!(fb.ty, "{} union", Self::get_modifier(ty));
                    self.print_union_fields(&mut fb, ty, indent, rp_offset);
                } else {
                    xwrite!(
                        fb.ty,
                        "union {} {}",
                        ty.name.as_ref().unwrap(),
                        Self::get_modifier(ty),
                    );
                }

                fb
            }
        }
    }

    pub fn build(&self) -> Result<String> {
        let mut built = String::new();
        let mut built_types = HashSet::new();
        self.types.iter().for_each(|t| {
            if !built_types.contains(
                t.name
                    .as_ref()
                    .unwrap_or(&format!("__anon_{}", t.id))
                    .as_str(),
            ) && !t.name.as_ref().unwrap_or(&String::new()).starts_with("<")
            {
                let built_type = self.recursion_processing(t, &mut 0, &mut 0);
                xwriteln!(&mut built, "{}", built_type);

                built_types.insert(
                    t.name
                        .as_ref()
                        .unwrap_or(&format!("__anon_{}", t.id))
                        .to_string(),
                );
            }
        });
        Ok(built)
    }
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

    let dependencies = toposort(&dependency_graph, None)
        .map_err(|_| anyhow!("Topological sort failed"))?
        .into_iter()
        .collect::<Vec<_>>();

    let builder = Builder::new(
        dependencies
            .iter()
            .filter_map(|d| {
                types
                    .iter()
                    .find(|t| node_ids.get(&t.id).is_some_and(|n| n == d))
                    .cloned()
            })
            .collect::<Vec<_>>(),
        data.arch.clone(),
    );

    builder.build()
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
        let c_file = indoc! {"
            #include <stdint.h>
        "}
        .to_string()
            + &to_c(&d)?;
        write(&out_file, c_file)?;
        Command::new("clang-format")
            .arg("-i")
            .arg(&out_file)
            .status()?;
    }

    Ok(())
}
