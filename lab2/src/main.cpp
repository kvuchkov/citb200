#include <iostream>
#include "invoice.h"
#include "textprinter.h"

int main() {
    Invoice invoice;
    Product *superMob = new Product("Super Mob", 12.90);
    Product *teaCup = new Product("Tea Cup", 5.30);
    Product *redWineGlass = new Product("Red Wine Glass", 8.60);

    invoice.add(superMob, 5);
    invoice.add(teaCup, 12);
    invoice.add(redWineGlass, 8);

    TextPrinter printer;
    printer.print(std::cout, invoice);

    delete superMob;
    delete teaCup;
    delete redWineGlass;
    return 0;
}