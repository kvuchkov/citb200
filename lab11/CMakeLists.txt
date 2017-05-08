cmake_minimum_required(VERSION 3.6)
project(lab11)

set(CMAKE_CXX_STANDARD 11)

find_package (Boost 1.50 COMPONENTS system)
include_directories(${Boost_INCLUDE_DIR})

set(SOURCE_FILES main.cpp)
add_executable(lab11 ${SOURCE_FILES})
target_link_libraries (lab11 ${Boost_LIBRARIES})