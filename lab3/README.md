# Problem Description
As before, we will take the solution of lab2 
and we will extend it with new concepts and functionality.

The task is to add discount logic to our program by using inheritance. We will
put the logic in a separate class Discount and we will subclass the Invoice to
use this new class and actually apply the discount.

At the end, we need to make a subclass of the Discount class, which will apply
only to certain items (for items with quantity greater than 3).

## Compiling
Without using cmake and make, you could compile the whole application by using the following command:
~~~~
g++ --std c++11 -o lab1 src/main.cpp src/product.cpp src/product.h src/item.cpp src/item.h src/invoice.cpp src/invoice.h src/textprinter.cpp src/textprinter.h
~~~~

