cmake_minimum_required(VERSION 3.28)
project(leet-code)

set(CMAKE_CXX_STANDARD 17)

include_directories(libs)
include_directories(easy)

add_executable(
        leet-code
        main.cpp
        libs/arrays.h
        easy/1-Two-Sum.cpp
)
