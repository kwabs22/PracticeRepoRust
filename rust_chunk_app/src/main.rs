use std::env;
mod simple_version;
mod struct_version;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 2 {
        eprintln!("Usage: {} <sentence>", args[0]);
        std::process::exit(1);
    }

    let sentence = &args[1];

    // Use the simple version
    let chunked_sentence = simple_version::three_words_chunk(sentence);
    println!("Simple version: {}", chunked_sentence);

    // Use the struct version
    let chunker = struct_version::Chunker::new(sentence);
    let chunked_sentence = chunker.three_words_chunk();
    println!("Struct version: {}", chunked_sentence);
}