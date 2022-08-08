#include <gtest/gtest.h>
#include "../src/Algorithms.hxx"
#include "../src/FileControl.hxx"

TEST(LZW_COPY_FILE_CONTROL, writeBianryFile_TEST)
{
    FILE *outputFile;
    outputFile = fopen("testFile.lzw", "w");
    int code = 0x3334;

    if (outputFile != nullptr)
    {
        LZW_COPY::writeBinaryFile(outputFile, code);
    }
    fclose(outputFile);


    FILE * testSteam;
    testSteam = fopen("./testFile.lzw","r");
    int res;
    while((res = fgetc(testSteam))!=EOF){
        EXPECT_EQ(res,0x33);
    }
}