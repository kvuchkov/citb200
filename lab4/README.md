# Problem Description
Create a program that defines a class hierarchy of an abstract base class Shape and three
 subclasses: Triangle, Circle and Rectangle. 
 
Using those classes, write a program that
 reads an input file "shapes.txt" in a relative path "inputs/shapes.txt". On each line of
 this file there is a character specifying the shape type (i.e. c - Circle, t - Triangle, r - Rectangle). 
 Instantiate each line as an object of the corresponding type and store it in a vector of 
 pointers to Shape.
 
 Finally, read the standard input. Each line consists of an integer - the 
 index number of the shape (starting from 1, e.g. 2 is the second shape from the shapes.txt file), and a 
 character 'a' for area and 'p' for perimeter. Output the area/perimeter of the specified 
 shape to the standard output. The last line of the input will consist of a single zero.
 
 Don't forget to free any allocated memory.
## Compiling
Without using cmake and make, you could compile the whole application by using the following command:
~~~~
g++ --std c++11 -o lab4 src/main.cpp src/shape.cpp src/shape.h src/circle.cpp src/circle.h src/triangle.cpp src/triangle.h src/rectangle.cpp src/rectangle.h
~~~~
Then copy the shapes.txt file to the build directory and place it in a folder "inputs".

