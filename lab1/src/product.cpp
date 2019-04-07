#include "product.h"
Product::Product(string name, double price)
{
	this->name = name;
	this->price = price;
}
string Product::getName()
{
	return this->name;
}
double Product::getPrice()
{
	return this->price;
}
