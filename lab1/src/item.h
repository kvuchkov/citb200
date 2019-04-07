#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
public:
	Item(const Product &p, int qty);
	const Product & getProduct() const;
	const int getQuantity() const;
private:
	Product product;
	int quantity;
};


#endif //LAB1_ITEM_H
