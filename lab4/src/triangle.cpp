//
// Created by kiril on 3/20/17.
//

#include "triangle.h"
#include <cmath>

Triangle::Triangle(int a, int b, int c) : a(a), b(b), c(c)
{
}
double Triangle::area()
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
