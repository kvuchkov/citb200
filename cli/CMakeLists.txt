cmake_minimum_required(VERSION 3.5)
project(cli)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES src/main.cpp)

add_executable(repeat ${SOURCES})

