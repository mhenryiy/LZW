#ifndef FILE_CONTROL_H
#define FILE_CONTROL_H

#include <cstdio>

namespace LZW_COPY
{
    namespace LZW_COPY_FILE_CONTROL
    {
        uint8_t leftOver;
        char preCode;

        void writeBinaryFile(FILE *, uint16_t);
        void readBinaryFile(FILE *);

        void writeBinaryFile(FILE *outputFile, uint16_t code)
        {
            leftOver = code & 0xF;
            preCode = (8 << leftOver) + (code >> 4);
            fputc(code >> 4, outputFile);
        }

        void readBinaryFile(FILE *inputFile)
        {
        }
    }
}
#endif
