cmake_minimum_required(VERSION 3.6)
project(lab11)

set(CMAKE_CXX_STANDARD 11)

find_package (Threads)

find_package (Boost 1.50 COMPONENTS system thread)
include_directories(${Boost_INCLUDE_DIR})

set(SOURCE_FILES main.cpp)
add_executable(lab11 ${SOURCE_FILES})
target_link_libraries (lab11 ${Boost_LIBRARIES})

add_executable(lab11-download download.cpp)
target_link_libraries (lab11-download ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries (lab11-download ${Boost_LIBRARIES})
