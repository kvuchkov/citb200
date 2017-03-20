//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H


#include "shape.h"

class Triangle : public Shape {
public:
    ~Triangle();

    double perimeter() const;

    double area() const;

    istream &read(istream &in);
private:
    double a, b, c;
};


#endif //LAB4_TRIANGLE_H
