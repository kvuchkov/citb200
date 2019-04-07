#include "product.h"
Product::Product(string n, double p)
{
	name = n;
	price = p;
}
string Product::getName()
{
	return name;
}
double Product::getPrice()
{
	return price;
}
