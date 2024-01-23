#include "struct_version.h"
#include <sstream>
#include <vector>

Chunker::Chunker(const std::string& sentence) : sentence(sentence) {}

std::string Chunker::three_words_chunk() const {
    std::istringstream iss(this->sentence);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    std::string result;
    for (size_t i = 0; i <= words.size() - 3; ++i) {
        result += words[i] + " " + words[i + 1] + " " + words[i + 2];
        if (i < words.size() - 3) {
            result += " | ";
        }
    }
    return result;
}