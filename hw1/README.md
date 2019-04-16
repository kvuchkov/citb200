# Description
Complete the ```inventory.cpp``` file by expanding the class declarations before the main function and provide definitions for all member functions __after__ the main.

> Do NOT modify the ```main``` or the two 3 print functions.

Make sure you follow all the best practices in terms of accessor functions, the use of ```const``` and the use of ```value initialization``` in constructors.

You can check ```inventory-solved.cpp``` to see the expected output. The program does not require any input.

# Requirements
* ```inventory.add(...)``` should add a new product with quantity if the product does not exist. If it already exists in the inventory, it should increase its quantity.
* ```inventory.take(...)``` should try to remove the specified number of items from the inventory and return the number of retrieved items. If there are not enough items in the inventory, the quantity becomes zero and the function returns the number that was successfully retrieved. If the product is not in the inventory, return ```0```.
* ```inventory.query(product)``` should return the number of items currently available. If the product is not in the inventory, return ```0```.

