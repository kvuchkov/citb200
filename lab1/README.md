# Problem Description
Define and implement the provided class files so that the program works without changing the main function.
The expected end result is the following, printed to the standard output stream:
~~~~
+--------+----------------------------------------+----------+----------+
|       5|Super Mob                               |     12.90|     64.50|
+--------+----------------------------------------+----------+----------+
|      12|Tea Cup                                 |      5.30|     63.60|
+--------+----------------------------------------+----------+----------+
|       8|Red Wine Glass                          |      8.60|     68.80|
+--------+----------------------------------------+----------+----------+
                                                     Subtotal|    196.90|
                                                             +----------+
                                                        Taxes|     19.69|
                                                             +----------+
                                                        TOTAL|    216.59|
                                                             +----------+
~~~~
Below you will find information about the purpose of each class.

## Product
Should define product name and price.

## Item
This class is intended to be used internally by the invoice. It should define a product (using the product class) and a quantity. Also, it 
 is responsible for calculating the amount for each item (i.e. product price * quantity).
 
## Invoice
Here you should implement the logic for the invoice. The class should:
* Contain the items in the invoice
* Calculate the subtotal - the sum of all item amounts
* Calculate the taxes - 10% of the subtotal
* Calculate total - the sum of the subtotal and the taxes

**Do not include any printing logic in this class**

## TextPrinter
Should implement the printing logic. The invoice should be printed to an ostream instance (the main uses stdout).