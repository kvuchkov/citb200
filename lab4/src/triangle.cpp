//
// Created by kiril on 3/20/17.
//

#include <cmath>
#include "triangle.h"

Triangle::~Triangle() {
    std::cout << " -> Destructor.Triangle" << std::endl;
}

double Triangle::perimeter() const {
    return a + b + c;
}

double Triangle::area() const {
    auto p = perimeter()/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

istream &Triangle::read(istream &in) {
    return in >> a >> b >> c;
}