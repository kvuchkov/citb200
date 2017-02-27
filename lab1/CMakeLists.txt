cmake_minimum_required(VERSION 3.6)
project(lab1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h)
add_executable(lab1 ${SOURCE_FILES})