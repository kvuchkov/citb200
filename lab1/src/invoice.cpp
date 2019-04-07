#include "invoice.h"
void Invoice::add(Product product, int quantity) {
	this->products.push_back(product);
}

vector<Product> Invoice::getProducts() {
	return this->products;
}
