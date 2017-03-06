# Problem Description
Starting from where we left in lab1, we have several classes that compose an
invoice application. First, we add some logging to see when objects (products and items) are
being copied to see how efficient our program is.

The task is to convert the program by using pointers so that it does not make copies of products and items.

## Compiling
Without using cmake and make, you could compile the whole application by using the following command:
~~~~
g++ --std c++11 -o lab1 src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h
~~~~

