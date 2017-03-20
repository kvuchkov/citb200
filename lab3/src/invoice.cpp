#include "invoice.h"

Invoice::~Invoice() {
    for(int i=0; i<items.size(); i++) {
        delete items[i];
    }
}

void Invoice::add(Product *product, int qty) {
    bool found = false;
    for (int i = 0; i < items.size(); i++) {
        if (items[i]->getProduct().getName() == product->getName()) {
            found = true;
            items[i]->add(qty);
            break;
        }
    }

    if (!found)
        items.push_back(new Item(product, qty));
}

int Invoice::count() const {
    return items.size();
}

const Product &Invoice::productAt(int idx) const {
    return items[idx]->getProduct();
}

int Invoice::quantityAt(int idx) const {
    return items[idx]->getQuantity();
}

double Invoice::totalAt(int idx) const {
    return items[idx]->total();
}

double Invoice::subtotal() const {
    double sum = 0;
    for (int i = 0; i < items.size(); i++)
        sum += items[i]->total();
    return sum;
}

double Invoice::total() const {
    return subtotal() + taxes();
}

double Invoice::taxes() const {
    return 0.10 * subtotal();
}
