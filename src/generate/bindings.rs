use anyhow::{anyhow, Result};
use bindgen::{Builder, FieldVisibilityKind, AliasVariation, EnumVariation, MacroTypeVariation, NonCopyUnionStyle};
use cargo_metadata::MetadataCommand;
use indoc::formatdoc;
use std::fs::{write, read_dir, create_dir_all};

pub fn generate_bindings() -> Result<()> {
    let metadata = MetadataCommand::new().no_deps().exec()?;

    let package = metadata
        .packages
        .iter()
        .find(|p| p.name == "vergilius")
        .ok_or_else(|| anyhow!("Failed to find package"))?;

    let out_dir = package
        .manifest_path
        .parent()
        .ok_or_else(|| anyhow!("Failed to get manifest path"))?
        .join("src")
        .into_std_path_buf();

    let bindings_out_dir = out_dir.join("bindings");

    let headers_dir = package
        .manifest_path
        .parent()
        .ok_or_else(|| anyhow!("Failed to get manifest path"))?
        .join("headers")
        .into_std_path_buf();

    let bindings_files = read_dir(&headers_dir)?
        .filter_map(|entry| entry.ok())
        .filter(|entry| entry.file_type().map(|ft| ft.is_file()).unwrap_or(false))
        .filter(|entry| entry.file_name().to_string_lossy().ends_with(".h"))
        .map(|entry| entry.path())
        .collect::<Vec<_>>();

    if !headers_dir.exists() {
        create_dir_all(&headers_dir)?;
    }

    if !bindings_out_dir.exists() {
        create_dir_all(&bindings_out_dir)?;
    }

    let mut modules = Vec::new();

    for bindings_file in bindings_files {
        let file_name = bindings_file.file_stem()
            .unwrap()
            .to_string_lossy()
            .replace(".", "_")
            .replace("-", "_")
            .replace("bindings", "windows");

        let out_file = bindings_out_dir
            .join(&file_name)
            .with_extension("rs");

        let bindings = Builder::default()
            .clang_arg("-fretain-comments-from-system-headers")
            .clang_arg("-fparse-all-comments")
            .clang_arg("-Wno-everything")
            .default_visibility(FieldVisibilityKind::Public)
            .default_alias_style(AliasVariation::TypeAlias)
            .default_enum_style(EnumVariation::Rust { non_exhaustive: false })
            .default_macro_constant_type(MacroTypeVariation::Unsigned)
            .default_non_copy_union_style(NonCopyUnionStyle::BindgenWrapper)
            .derive_copy(true)
            .derive_debug(true)
            .derive_default(true)
            .derive_eq(true)
            .derive_hash(true)
            .derive_ord(true)
            .derive_partialeq(true)
            .derive_partialord(true)
            .generate_cstr(true)
            .generate_comments(true)
            .layout_tests(false)
            .header(bindings_file.to_string_lossy())
            .generate()?;

        bindings.write_to_file(out_file)?;
        modules.push(file_name);
    }

    let bindings_rs = modules.iter().map(|module| {
        format!("pub mod {};", module)
    }).collect::<Vec<_>>().join("\n");

    let bindings_rs_file = out_dir.join("bindings.rs");

    write(bindings_rs_file, formatdoc! {"
        //! Bindings to Windows API
        //!
        //! This module contains bindings to Windows API.
        //!
        //! # Examples
        //!
        //! ```no_run
        //! use vergilius::bindings::windows::*;
        //! ```
        
        #![allow(non_upper_case_globals)]
        #![allow(non_camel_case_types)]
        #![allow(non_snake_case)]
        
        {}
    ", bindings_rs})?;

    Ok(())
}
