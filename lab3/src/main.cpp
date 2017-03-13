#include <iostream>
#include "invoice.h"
#include "textprinter.h"
#include "discount.h"
#include "threeItemsDiscount.h"

int main() {
    Invoice invoice;
    Product *superMob = new Product("Super Mob", 12.90);
    Product *teaCup = new Product("Tea Cup", 5.30);
    Product *redWineGlass = new Product("Red Wine Glass", 8.60);

    invoice.add(superMob, 5);
    invoice.add(teaCup, 12);
    invoice.add(redWineGlass, 8);

    Discount discount = new Discount(0.1); //10% discount
    invoice.add(discount);

    TextPrinter printer;
    printer.print(std::cout, invoice);

    ThreeItemsDiscount threeItemsDiscount = new ThreeItemsDiscount(0.05); //5% discount on items with quantity more then 3
    invoice.add(threeItemsDiscount);

    printer.print(std::cout, invoice);

    delete superMob;
    delete teaCup;
    delete redWineGlass;
    return 0;
}