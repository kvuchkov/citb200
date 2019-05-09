//
// Created by kiril on 3/20/17.
//

#include "circle.h"
#include <cmath>

Circle::Circle() : Circle(1) {}

Circle::Circle(int radius) : radius(radius)
{
}

double Circle::area()
{
	return radius * radius * M_PI;
}

double Circle::perimeter()
{
	return 2 * M_PI * radius;
}
