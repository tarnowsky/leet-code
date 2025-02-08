cmake_minimum_required(VERSION 3.28)
project(leet-code)

set(CMAKE_CXX_STANDARD 17)

include_directories(libs)
include_directories(easy)
include_directories(medium)

add_executable(
        leet-code
        main.cpp
        libs/linked_list.h
        medium/2-Add-Two-Numbers.cpp
)
