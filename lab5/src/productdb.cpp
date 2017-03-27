//
// Created by kiril on 3/27/17.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "productdb.h"

using std::setw;
using std::ios_base;


ProductDb::ProductDb(const char *filepath) : filepath(filepath) {
    std::ifstream infile(filepath);
    if (!infile.fail()) {
        std::string line;
        while (getline(infile, line)) {
            string name = line.substr(0, NAME_FIELD_SIZE);
            string priceStr = line.substr(NAME_FIELD_SIZE);
            double price = double_from_string(priceStr);
            Product *product = new Product(name, price);
            data.push_back(product);
        }
    }
}

ProductDb::~ProductDb() {
    for(int i=0; i<data.size(); i++)
        delete data[i];
}

int ProductDb::count() {
    return data.size();
}

Product *ProductDb::getAt(int idx) {
    return data[idx];
}

bool ProductDb::save(Product *product) {
    int idx = index_of(product);
    if (idx < 0)
        return false;

    std::fstream file(filepath);
    if(file.fail())
        return false;

    file.seekp(idx*ROW_SIZE, ios_base::beg);

    write(file, product);
}

void ProductDb::write(std::ostream &out, Product *product) {
    out << setw(NAME_FIELD_SIZE) << product->getName();
    out << setw(PRICE_FIELD_SIZE) << std::right << product->getPrice();
    out << std::endl;
}

double ProductDb::double_from_string(string str) {
    std::istringstream iss(str);
    double price;
    iss >> price;
    return price;
}

int ProductDb::index_of(Product *product) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i] == product)
            return i;
    }
    return -1;
}
