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
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
bool Triangle::read(istream &in)
{
	int a, b, c;
	if (in >> a >> b >> c)
	{
		if (a < b + c && b < a + c && c < a + b)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			return true;
		}
	}

	return false;
}
