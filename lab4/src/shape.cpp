//
// Created by kiril on 3/20/17.
//

#include "shape.h"

Shape::~Shape() {
    std::cout << " -> Destructor.Shape" << std::endl;
}

istream &operator>>(istream &in, Shape *shape) {
    return shape->read(in);
}