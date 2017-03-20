//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H


#include "shape.h"

class Rectangle : public Shape {
public:
    ~Rectangle();

    double perimeter() const;

    double area() const;

    istream &read(istream &in);

private:
    double a, b;
};


#endif //LAB4_RECTANGLE_H
