#include "textprinter.h"

using std::endl;

void TextPrinter::print(std::ostream &out, Invoice invoice) {
	for (auto product : invoice.getProducts()) {
		out << product.getName() << " (" << product.getPrice() << ")" << endl;
	}
}
