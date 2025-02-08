cmake_minimum_required(VERSION 3.28)
project(leet-code)

set(CMAKE_CXX_STANDARD 17)

include_directories(libs)
include_directories(easy)

add_executable(
        leet-code
        main.cpp
        libs/linked_list.h
        easy/2-Add-Two-Numbers.cpp
)
