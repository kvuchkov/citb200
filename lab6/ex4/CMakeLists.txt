cmake_minimum_required(VERSION 3.5)
project(calculate)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    src/calc.cpp
    src/main.cpp)

add_executable(calculate ${SOURCE_FILES})