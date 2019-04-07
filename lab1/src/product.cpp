#include "product.h"
#include <iostream>

Product::Product(string n, double p)
{
	name = n;
	price = p;
}
const string & Product::getName() const
{
	return name;
}
const double Product::getPrice() const
{
	return price;
}
Product::Product(const Product &other): name(other.name), price(other.price) {
	std::cout << "!!!COPY PRODUCT!!!" << std::endl;
}
