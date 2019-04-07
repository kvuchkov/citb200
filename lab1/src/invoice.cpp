#include "invoice.h"

void Invoice::add(const Product &product, int quantity)
{
	Item item(product, quantity);
	this->items.push_back(item);
}

vector<Product> Invoice::getProducts() const
{
	vector<Product> products;
	for (auto item : items)
	{
		products.push_back(item.getProduct());
	}
	return products;
}

const vector<Item> & Invoice::getItems() const
{
	return items;
}

double Invoice::computeItemTotal(const Item & item) const
{
	return item.getQuantity() * item.getProduct().getPrice();
}

double Invoice::computeSubtotal() const
{
	double sum = 0;
	for (auto item : items)
	{
		sum += computeItemTotal(item);
	}
	return sum;
}

double Invoice::computeTax() const
{
	return 0.1 * computeSubtotal();
}
