#include "item.h"

Item::Item(const Product &product, int quantity) : product(product), quantity(quantity) {}

const Product &Item::getProduct() const {
    return product;
}

int Item::getQuantity() const {
    return quantity;
}

double Item::total() const {
    return quantity * product.getPrice();
}

void Item::add(int qty) {
    quantity += qty;
}
