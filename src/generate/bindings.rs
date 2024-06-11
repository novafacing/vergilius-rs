use anyhow::{anyhow, Result};
use bindgen::{Builder, FieldVisibilityKind, AliasVariation, EnumVariation, MacroTypeVariation, NonCopyUnionStyle};
use cargo_metadata::MetadataCommand;
use indoc::indoc;
use std::fs::read_dir;

fn generate_bindings() -> Result<()> {
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

    for bindings_file in bindings_files {
        let out_file = out_dir
            .join(bindings_file.file_stem().unwrap().to_string_lossy().replace(".", "_").replace("-", "_"))
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
    }

    Ok(())
}
