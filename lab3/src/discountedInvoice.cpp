//
// Created by Kiril Vuchkov on 3/13/17.
//

#include "discountedInvoice.h"

void DiscountedInvoice::addDiscount(Discount *discount) {
    discounts.push_back(discount);
}

double DiscountedInvoice::subtotal() const {
    double subtotal = Invoice::subtotal();

    for(int i=0; i<discounts.size(); i++) {
        subtotal = discounts[i]->apply(subtotal);
    }

    return subtotal;
}