#include "item.h"
Item::Item(const Product *p, int qty) : product(p) {
	if (qty < 0) {
		quantity = 0;
	} else {
		quantity = qty;
	}
}

const Product & Item::getProduct() const {
	return *product;
}
const int Item::getQuantity() const {
	return quantity;
}
