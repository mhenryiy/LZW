#ifndef FILE_CONTROL_H
#define FILE_CONTROL_H

#include <cstdio>

namespace LZW_COPY
{

    void writeBinaryFile(FILE *, int);
    void readBinaryFile(FILE *);
}

void LZW_COPY::writeBinaryFile(FILE * outputFile, int code)
{
    if (outputFile != nullptr)
    {
        fputc(code, outputFile);
    }
}

#endif
