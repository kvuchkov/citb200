#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;


class Invoice {
public:
	void add(Product product, int quantity);
};


#endif //LAB1_INVOICE_H
