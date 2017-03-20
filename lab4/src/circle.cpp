//
// Created by kiril on 3/20/17.
//

#include "circle.h"
#include <cmath>

Circle::~Circle() {
    std::cout << " -> Destructor.Circle" << std::endl;
}

double Circle::perimeter() const {
    return 2*PI*radius;
}

double Circle::area() const {
    return PI*radius*radius;
}

istream &Circle::read(istream &in) {
    return in >> radius;
}
