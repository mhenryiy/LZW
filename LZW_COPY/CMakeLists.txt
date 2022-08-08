cmake_minimum_required(VERSION 3.16)
project(LZW_COPY)

aux_source_directory(${CMAKE_SOURCE_DIR}/src SRC)

add_subdirectory(${CMAKE_SOURCE_DIR}/test)
add_executable(lzw ${SRC})