#include <iostream>
#include "product.h"

Product::Product(const string &name, double price) : name(name), price(price) {}
Product::Product(const Product &other) : Product(other.name, other.price) {
    std::cout << " -- CopyProduct " << other.name << std::endl;
}

const string &Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}
