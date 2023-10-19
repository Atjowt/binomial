cmake_minimum_required(VERSION 3.0.0)
project(binomial VERSION 0.1.0 LANGUAGES C)

add_executable(binomial src/main.c)
target_include_directories(binomial PRIVATE include)
target_compile_options(binomial PRIVATE -O3)

include(CTest)
enable_testing()

add_test(test1 binomial 1 3)
add_test(test2 binomial 2 3)
add_test(test3 binomial 3 3)
add_test(test4 binomial 4 3)
add_test(test5 binomial 5 3)
add_test(test6 binomial 6 3)
add_test(test7 binomial 7 3)
add_test(test8 binomial 8 3)
