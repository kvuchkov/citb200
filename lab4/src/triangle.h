//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(int a, int b, int c);
	virtual double area();
	virtual bool read(istream &in);
private:
	int a, b, c;
};

#endif //LAB4_TRIANGLE_H
