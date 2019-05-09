//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_SHAPE_H
#define LAB4_SHAPE_H


#include <iostream>

using std::istream;

class Shape {
public:
	virtual double area() =0;
	virtual bool read(istream &in) =0;
};

#endif //LAB4_SHAPE_H
