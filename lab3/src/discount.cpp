//
// Created by Kiril Vuchkov on 3/13/17.
//

#include "discount.h"
Discount::Discount(double percentage) : percentage(percentage)
{
}

double Discount::apply(double amount) const {
	return amount * (1 - percentage);
}
