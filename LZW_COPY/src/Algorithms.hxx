#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <fstream>
#define DICTIONARY_MAX_SIZE 1024

namespace LZW_COPY
{
    typedef struct Algorithms
    {
        char * dictionany[DICTIONARY_MAX_SIZE];

    } LZWData;

    void compress(FILE *inputFile, FILE *outputFile);
    void decompress(FILE *inputFile, FILE *outputFile);
} // LZW_COPY

#endif