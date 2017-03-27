#include <iostream>
#include <fstream>
#include "invoice.h"
#include "textprinter.h"
#include "productreader.h"
#include "productdb.h"

using std::istream;

int main(int argc, char * argv[]) {
    Invoice invoice;

    std::ifstream infile("data/products.dat");
    if(infile.fail())
        return -1;

    ProductReader reader;

    vector<Product *> products = reader.read(infile);

    invoice.add(products[0], 5);
    invoice.add(products[1], 12);
    invoice.add(products[2], 8);

    TextPrinter printer;
    printer.print(std::cout, invoice);


    ProductDb db("data/products2.db");
    std::cout <<  db.count() << " products in database." << std::endl;

    Invoice invoice2;
    invoice2.add(db.getAt(0), 5);
    invoice2.add(db.getAt(1), 12);
    invoice2.add(db.getAt(2), 8);

    printer.print(std::cout, invoice2);

    Product * product2 = db.getAt(1);
    product2->setPrice(15.60);
    db.save(product2);

    Product *other = new Product("Dummy", 10);
    db.save(other); // should ignore it

    ProductDb db2("data/products2.db");

    std::cout <<  db2.count() << " products in database." << std::endl;

    Invoice invoice3;
    invoice3.add(db2.getAt(0), 5);
    invoice3.add(db2.getAt(1), 12);
    invoice3.add(db2.getAt(2), 8);

    printer.print(std::cout, invoice3);

    return 0;
}