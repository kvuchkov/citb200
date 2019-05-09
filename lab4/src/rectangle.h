//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(int a, int b);
	virtual double area();
	virtual double perimeter();

private:
	int a, b;
};

#endif //LAB4_RECTANGLE_H
