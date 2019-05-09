//
// Created by kiril on 3/20/17.
//

#include "rectangle.h"
Rectangle::Rectangle() : Rectangle(1, 1)
{
}

Rectangle::Rectangle(int a, int b) : a(a), b(b)
{
}
double Rectangle::area()
{
	return a * b;
}
bool Rectangle::read(istream &in)
{
	int a, b;
	if (in >> a >> b)
	{
		this->a = a;
		this->b = b;
		return true;
	}
	
	return false;
}
