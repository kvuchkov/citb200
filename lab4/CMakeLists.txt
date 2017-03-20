cmake_minimum_required(VERSION 3.5)
project(lab4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/shape.cpp src/shape.h src/circle.cpp src/circle.h src/triangle.cpp src/triangle.h src/rectangle.cpp src/rectangle.h)
add_executable(lab4 ${SOURCE_FILES})
file(COPY shapes.txt DESTINATION inputs)
