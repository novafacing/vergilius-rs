#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]

#[cfg(feature = "generate")]
pub mod generate;

pub mod bindings;
pub use bindings::*;
