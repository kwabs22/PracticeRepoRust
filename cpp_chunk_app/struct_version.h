#ifndef STRUCT_VERSION_H
#define STRUCT_VERSION_H

#include <string>

class Chunker {
public:
    Chunker(const std::string& sentence);
    std::string three_words_chunk() const;

private:
    std::string sentence;
};

#endif // STRUCT_VERSION_H