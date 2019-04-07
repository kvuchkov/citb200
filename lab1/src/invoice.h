#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;


class Invoice {
public:
	void add(Product product, int quantity);
	vector<Product> getProducts() const;
	vector<Item> getItems() const;
	double computeItemTotal(Item item) const;
	double computeSubtotal() const;
	double computeTax() const;
private:
	vector<Item> items;
};


#endif //LAB1_INVOICE_H
