# Vergilius RS

Rust auto-generated bindings from the C structures published at
[vergiliusproject.com](https://www.vergiliusproject.com/).

## Generating

To generate headers:

```
cargo run --bin generate-headers --features=generate
```

You will then need to make a couple modifications to some files. To list the errors,
just compile a header like `clang -Wno-everything -o /dev/null
headers/bindings-10.0.22631-2428-x64.h`.

- Move definition before first use
  - NOTE: Structure dependencies are resolved using a topological ordering, but
    dependencies with cycles sometimes resolve in the wrong order (typically only 1-2 per
    file)
- Rename enum definition with `<` in the name

To generate bindings:

```cargo
cargo run --bin generate-bindings --features=generate
```