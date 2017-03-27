#include <iostream>
#include "item.h"

Item::Item(const Product *product, int quantity) : product(product), quantity(quantity) {}

Item::Item(const Item &item) : Item(item.product, item.quantity) {
    std::cout << " -- CopyItem " << item.product->getName() << std::endl;
}

const Product &Item::getProduct() const {
    return *product;
}

int Item::getQuantity() const {
    return quantity;
}

double Item::total() const {
    return quantity * product->getPrice();
}

void Item::add(int qty) {
    quantity += qty;
}
