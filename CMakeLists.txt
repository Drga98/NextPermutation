cmake_minimum_required(VERSION 3.22)
project(NextPermutation)

set(CMAKE_CXX_STANDARD 17)

option(BUILD_TESTS "Perform unit tests on this project" ON)

add_executable(NextPermutation
        src/main.cpp
        src/NextPermute.h)

if(${BUILD_TESTS})
    enable_testing()

    add_subdirectory(third_party/googletest)

    add_executable(permute_test
            test/main.cpp
            test/NextPermuteTest.cpp
            src/NextPermute.h)
    target_include_directories(permute_test PUBLIC src)

    add_test(NAME permute_test COMMAND permute_test)

    target_link_libraries(permute_test PUBLIC gtest)
endif()