// This file contains the struct-based version of the chunking logic

pub struct Chunker {
    sentence: String,
}

impl Chunker {
    pub fn new(sentence: &str) -> Chunker {
        Chunker {
            sentence: sentence.to_string(),
        }
    }

    pub fn three_words_chunk(&self) -> String {
        let words: Vec<&str> = self.sentence.split_whitespace().collect();
        let chunks: Vec<String> = words.windows(3)
            .map(|chunk| chunk.join(" "))
            .collect();
        chunks.join(" | ")
    }
}