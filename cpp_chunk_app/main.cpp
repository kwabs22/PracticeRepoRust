#include "simple_version.h"
#include "struct_version.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <sentence>" << std::endl;
        return 1;
    }

    std::string sentence(argv[1]);

    // Simple version
    std::string simple_result = three_words_chunk(sentence);
    std::cout << "Simple version: " << simple_result << std::endl;

    // Struct version
    Chunker chunker(sentence);
    std::string struct_result = chunker.three_words_chunk();
    std::cout << "Struct version: " << struct_result << std::endl;

    return 0;
}