cmake_minimum_required(VERSION 3.5)
project(lab3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h src/discount.cpp src/discount.h src/discountedInvoice.cpp src/discountedInvoice.h)
add_executable(lab3 ${SOURCE_FILES})