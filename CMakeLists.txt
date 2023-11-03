cmake_minimum_required(VERSION 3.22)

project(
    Test
    VERSION 0.1
    DESCRIPTION "Eigen Tutorials"
    LANGUAGES CXX)

add_executable(test test.cpp)
add_compile_options(-std=c++17)
target_compile_options(test PRIVATE -Wall -Werror)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)
target_link_libraries (test Eigen3::Eigen)