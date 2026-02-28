cmake_minimum_required(VERSION 3.10)

project(Single_file_cmakeProject)

set(CMAKE_BUILD_TYPE Debug)

add_compile_options(-g)

add_executable(this_exe single_test.cpp)