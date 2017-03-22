//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_SHAPE_H
#define LAB4_SHAPE_H


#include <iostream>

using std::istream;

class Shape {
public:
    virtual istream &read(istream &in) =0;

    virtual double area() const =0;

    virtual double perimeter() const =0;
};

#endif //LAB4_SHAPE_H
