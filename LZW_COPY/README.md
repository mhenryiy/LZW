
## LZW 无损压缩算法的C/C++语言实现  


***
### 简述
- github radekstepan的实现方法，源代码<a href = "https://github.com/radekstepan/LZW">https://github.com/radekstepan/LZW </a>
- 我的源代码地址[https://gitee.com/mhenry/scip](https://gitee.com/mhenry/scip)
- 使用C的标准库方法实现LZW算法
- LZW_COPY文件夹又单独的CMAKE结构

***

### 用法

    make -S. -Bbuild
    cd build & make
    ./build/lzw c <fileName> \\ 压缩文件  
    or ./build/lzw d <fileName> \\解压缩文件 
