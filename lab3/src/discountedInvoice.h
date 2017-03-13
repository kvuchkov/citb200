//
// Created by Kiril Vuchkov on 3/13/17.
//

#ifndef LAB3_DISCOUNTEDINVOICE_H
#define LAB3_DISCOUNTEDINVOICE_H

#include "invoice.h"
#include "discount.h"

class DiscountedInvoice : public Invoice {
public:
    void addDiscount(Discount *discount);
    double subtotal() const;
private:
    vector<Discount *> discounts;
};


#endif //LAB3_DISCOUNTEDINVOICE_H
