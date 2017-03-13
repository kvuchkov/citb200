#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;

class Invoice {
public:
    ~Invoice();

    void add(Product *product, int qty);

    int count() const;

    const Product &productAt(int idx) const;

    int quantityAt(int idx) const;

    double totalAt(int idx) const;

    virtual double subtotal() const;

    double taxes() const;

    double total() const;

private:
    vector<Item *> items;
};


#endif //LAB1_INVOICE_H
