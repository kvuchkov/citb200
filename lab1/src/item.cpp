#include "item.h"
Item::Item(Product p, int qty) : product(p) {
	if (qty < 0) {
		quantity = 0;
	}
}

Product Item::getProduct() {
	return product;
}
