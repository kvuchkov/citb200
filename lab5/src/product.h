#ifndef LAB1_PRODUCT_H
#define LAB1_PRODUCT_H

#include <string>

using std::string;

class Product {
public:
    Product(const string &name, double price);
    Product(const Product &other);

    const string &getName() const;

    double getPrice() const;

    void setPrice(double price);

private:
    string name;
    double price;
};


#endif //LAB1_PRODUCT_H
