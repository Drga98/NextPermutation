cmake_minimum_required(VERSION 3.22)
project(NextPermutation)

set(CMAKE_CXX_STANDARD 17)

option(BUILD_TESTS "Perform unit tests on this project" ON)

add_executable(NextPermutation
        src/main.cpp
        src/NextPermute.h)
