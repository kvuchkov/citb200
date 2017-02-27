# Problem
Define and implement the provided class files so that the program works without changing the main function. 
Below you will find information about the purpose of every class.

## Product
Data class that should define product name and price.

## Item
Helper class for the invoice that should define a product (using the product class) and quantity. Also, it 
 is responsible for calculating the amount (product price * quantity).
 
## Invoice
Should implement the logic for the invoice. Use the following guideline:
* Should contain items
* Should calculate subtotal - sum of all item amounts
* Should calculate taxes - 10% if the subtotal
* Should calculate total - the sum of the subtotal and the taxes
* Should NOT contain any printing logic

## TextPrinter
Should implement the printing logic. The invoice should be printed to a standard ostream (the main uses stdout).

