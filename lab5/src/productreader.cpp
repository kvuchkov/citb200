//
// Created by kiril on 3/27/17.
//

#include "productreader.h"

std::vector<Product *> ProductReader::read(std::istream &in) {
    std::vector<Product *> data;
    string name;
    double price;
    while(getline(in, name, ',') && in >> price) {
        data.push_back(new Product(name, price));
        getline(in, name); //read trailing new line
    }

    return data;
}
