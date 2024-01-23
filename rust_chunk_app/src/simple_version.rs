// This file contains the simple version of the chunking logic

pub fn three_words_chunk(sentence: &str) -> String {
    let words: Vec<&str> = sentence.split_whitespace().collect();
    let chunks: Vec<String> = words.windows(3)
        .map(|chunk| chunk.join(" "))
        .collect();
    chunks.join(" | ")
}