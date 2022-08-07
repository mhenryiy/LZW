
### writeBinary readBinary function


    int leftover = 0;
    int leftoverBits;
    
    void writeBinary(FILE * output, int code) {
        if (leftover > 0) {
            int previousCode = (leftoverBits << 4) + (code >> 8);
            
            fputc(previousCode, output);
            fputc(code, output);
            
            leftover = 0; // no leftover now
        } else {
            leftoverBits = code & 0xF; // save leftover, the last 00001111
            leftover = 1;
            
            fputc(code >> 4, output);
        }
    }
    
    int readBinary(FILE * input) {
        int code = fgetc(input);    
        if (code == EOF) return 0;
    
        if (leftover > 0) {
            code = (leftoverBits << 8) + code;
            
            leftover = 0;
        } else {
            int nextCode = fgetc(input);
            
            leftoverBits = nextCode & 0xF; // save leftover, the last 00001111
            leftover = 1;
            
            code = (code << 4) + (nextCode >> 4);
        }
        return code;
    }
    

例子：

abc  
a：61 0x3d  
b: 62 0x3e  
c: 63 0x3f 

a-> code=0x61 -> leftoverBits = 0x1 -> output = code >>4 = 0x06  
b-> code=0x62 -> leftoverBits = 0x10 -> previousCode = 0x10 + 0x0 =0x10 -> output = 0x061062