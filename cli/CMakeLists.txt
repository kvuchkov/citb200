cmake_minimum_required(VERSION 3.5)

project(cli)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp)

add_executable(repeat ${SOURCE_FILES})
