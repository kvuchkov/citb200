cmake_minimum_required(VERSION 3.5)
project(lab5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h src/productreader.cpp src/productreader.h src/productdb.cpp src/productdb.h)
add_executable(lab5 ${SOURCE_FILES})

file(COPY products.dat DESTINATION data)
file(COPY products2.db DESTINATION data)