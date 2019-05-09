//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(int radius);
	virtual double area();
	virtual bool read(istream &in);

private:
	int radius;
};

#endif //LAB4_CIRCLE_H
