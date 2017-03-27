//
// Created by kiril on 3/27/17.
//

#ifndef LAB5_PRODUCTDB_H
#define LAB5_PRODUCTDB_H


#include "product.h"
#include <vector>

class ProductDb {
public:
    ProductDb(const char *filepath);
    ~ProductDb();
    int count();

    Product *getAt(int idx);

    bool save(Product *product);

private:
    const unsigned long NAME_FIELD_SIZE = 20;
    const unsigned long PRICE_FIELD_SIZE = 10;
    const unsigned long ROW_SIZE = NAME_FIELD_SIZE + PRICE_FIELD_SIZE + 1;

    const char *filepath;
    std::vector<Product *> data;

    Product *read(std::ifstream in);

    double double_from_string(string str);

    int index_of(Product *product);

    void write(std::ostream &out, Product *product);
};


#endif //LAB5_PRODUCTDB_H
