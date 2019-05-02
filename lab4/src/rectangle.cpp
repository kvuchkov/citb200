//
// Created by kiril on 3/20/17.
//

#include "rectangle.h"

Rectangle::Rectangle(int a, int b) : a(a), b(b)
{
}

double Rectangle::area()
{
	return a * b;
}
