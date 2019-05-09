//
// Created by kiril on 3/20/17.
//

#include "rectangle.h"

Rectangle::Rectangle() : Rectangle(1, 1) {}

Rectangle::Rectangle(int a, int b) : a(a), b(b)
{
}

double Rectangle::area()
{
	return a * b;
}
double Rectangle::perimeter()
{
	return 2 * a + 2 * b;
}
bool Rectangle::read(std::istream &in)
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
