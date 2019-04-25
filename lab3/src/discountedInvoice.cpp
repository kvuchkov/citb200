//
// Created by Kiril Vuchkov on 3/14/17.
//

#include "discountedInvoice.h"

void DiscountedInvoice::addDiscount(const Discount *discount) {
	discounts.push_back(discount);
}

double DiscountedInvoice::subtotal() const {
	double subtotal = Invoice::subtotal();
	for(auto discount : discounts) {
		subtotal = discount->apply(subtotal);
	}
	return subtotal;
}
