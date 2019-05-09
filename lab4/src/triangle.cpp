//
// Created by kiril on 3/20/17.
//

#include "triangle.h"
#include <cmath>

Triangle::Triangle() : Triangle(1, 1, 1)
{
}

Triangle::Triangle(int a, int b, int c) : a(a), b(b), c(c)
{
}
double Triangle::area()
{
	double p = perimeter() / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::perimeter()
{
	return a + b + c;
}
