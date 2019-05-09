//
// Created by kiril on 3/20/17.
//

#include "circle.h"
Circle::Circle() : Circle(1) {}
Circle::Circle(int radius) : radius(radius)
{
}

double Circle::area()
{
	return radius;
}

bool Circle::read(istream &in)
{
	int r;
	if (in >> r)
	{
		radius = r;
		return true;
	}
	
	return false;
}
