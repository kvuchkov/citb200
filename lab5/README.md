# Problem Description
Using the end result from lab2, we will extend our invoice program to load products
from a file. Given the main function, implement the ProductReader and ProductDb classes
to read from files using two different formats: the reader must use products.dat format
 and the ProductDb must use products.db format. Note that the ProductDb class has a
member-function that saves a given product to disk.

Also, replace the hard-coded data file paths with command line arguments.

## Compiling
Without using cmake and make, you could compile the whole application by using the following command:
~~~~
g++ --std c++11 -o lab4 src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h src/productreader.cpp src/productreader.h src/productdb.cpp src/productdb.h
~~~~

