#include <cstring>
#include <cstdio>
#include "./Algorithms.hxx"

int main(int argc, char **argv)
{
    FILE *inputFile = nullptr, *outputFile = nullptr;
    if (strcmp(argv[1], "c") == 0 && argc == 3)
    {
        printf("compressing file ...\n");
        LZW_COPY::compress(inputFile, outputFile);
    }
    else if (strcmp(argv[1], "d") == 0 && argc == 3)
    {
        printf("decompressing file ...\n");
        LZW_COPY::decompress(inputFile, outputFile);
    }
    else
    {
        const char *errMsg = "Usage: ./lzw <opt> <filename>";
        const char *hint = "Use <opt> c for compress\nUse <opt> d for decompress";
        printf("%s\n", errMsg);
        printf("%s\n", hint);
    }

    return 0;
}