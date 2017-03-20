//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H


#include "shape.h"

class Circle : public Shape {
public:
    ~Circle();

    double perimeter() const;

    double area() const;

    istream &read(istream &in);

private:
    const double PI = 3.14159265359;
    double radius;
};


#endif //LAB4_CIRCLE_H
