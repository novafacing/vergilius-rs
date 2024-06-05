#!/usr/bin/env -S cargo +nightly-gnu -Z script
---
[dependencies]
anyhow = "*"
bindgen = "*"
cargo_metadata = "*"
---

use anyhow::{anyhow, Result, Error};
use cargo_metadata::MetadataCommand;
use std::fs::{copy, read_dir};

fn main() -> Result<()> {
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

    let tmp_dir = metadata.target_directory.join("tmp").into_std_path_buf();

    let bindings_files = read_dir(&headers_dir)?
        .filter_map(|entry| entry.ok())
        .filter(|entry| entry.file_type().map(|ft| ft.is_file()).unwrap_or(false))
        .filter(|entry| entry.file_name().to_string_lossy().ends_with(".h"))
        .map(|entry| entry.path())
        .collect::<Vec<_>>();

    Ok(())
}