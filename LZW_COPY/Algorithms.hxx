#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <fstream>

namespace LZW_COPY
{
    typedef struct Algorithms
    {

    } LZWData;

    void compress(FILE *inputFile, FILE *outputFile);
    void decompress(FILE *inputFile, FILE *outputFile);
} // LZW_COPY

#endif