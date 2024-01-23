#include "simple_version.h"
#include <sstream>
#include <vector>

std::string three_words_chunk(const std::string& sentence) {
    std::istringstream iss(sentence);
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