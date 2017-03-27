//
// Created by kiril on 3/27/17.
//

#ifndef LAB5_PRODUCTREADER_H
#define LAB5_PRODUCTREADER_H

#include <iostream>
#include <vector>
#include "product.h"

class ProductReader {
public:
    std::vector<Product *> read(std::istream &in);
};


#endif //LAB5_PRODUCTREADER_H
