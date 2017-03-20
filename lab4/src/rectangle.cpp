//
// Created by kiril on 3/20/17.
//

#include "rectangle.h"

Rectangle::~Rectangle() {
    std::cout << " -> Destructor.Rectangle" << std::endl;
}

double Rectangle::perimeter() const {
    return a*b;
}

double Rectangle::area() const {
    return 2*(a+b);
}

istream &Rectangle::read(istream &in) {
    return in >> a >> b;
}