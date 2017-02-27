#include <iostream>
#include "invoice.h"
#include "textprinter.h"

int main() {
    Invoice invoice;
    Product superMob("Super Mob", 12.90);
    Product teaCup("Tea Cup", 5.30);
    Product redWineGlass("Red Wine Glass", 8.60);

    invoice.add(superMob, 5);
    invoice.add(teaCup, 12);
    invoice.add(redWineGlass, 8);

    TextPrinter printer;
    printer.print(std::cout, invoice);
    return 0;
}