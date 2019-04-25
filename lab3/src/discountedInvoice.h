//
// Created by Kiril Vuchkov on 3/14/17.
//

#ifndef LAB3_DISCOUNTEDINVOICE_H
#define LAB3_DISCOUNTEDINVOICE_H

#include "invoice.h"
#include "discount.h"

class DiscountedInvoice : public Invoice {
public:
	void addDiscount(const Discount* discount);
	virtual double subtotal() const;
private:
	vector<const Discount*> discounts;
};


#endif //LAB3_DISCOUNTEDINVOICE_H
