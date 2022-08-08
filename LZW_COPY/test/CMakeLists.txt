
enable_testing()
include(GoogleTest)

add_executable(LZWTest LZWTest.cxx)
target_link_libraries(LZWTest PUBLIC gtest gtest_main pthread)
target_include_directories(LZWTest PUBLIC ${SRC})

gtest_discover_tests(LZWTest)
