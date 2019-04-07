#ifndef LAB1_PRODUCT_H
#define LAB1_PRODUCT_H

#include <string>

using std::string;

class Product {
public:
	Product(string name, double price);
private:
	string name;
	double price;
};


#endif //LAB1_PRODUCT_H
