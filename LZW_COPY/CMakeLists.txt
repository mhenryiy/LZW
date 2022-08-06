cmake_minimum_required(VERSION 3.16)
project(LZW_COPY)

aux_source_directory(${CMAKE_SOURCE_DIR} SRC)
add_executable(lzw ${SRC})