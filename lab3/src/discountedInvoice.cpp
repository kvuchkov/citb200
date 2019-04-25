//
// Created by Kiril Vuchkov on 3/14/17.
//

#include "discountedInvoice.h"

void DiscountedInvoice::addDiscount(const Discount* discount) {
	
}

double DiscountedInvoice::subtotal() const {
	double subtotal = Invoice::subtotal();
	return subtotal;
}
