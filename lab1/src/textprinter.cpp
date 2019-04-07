#include "textprinter.h"
#include <iomanip>

using std::endl;

void TextPrinter::print(std::ostream &out, Invoice invoice) {
	out << std::fixed << std::setprecision(2);
	
	for (auto item : invoice.getItems()) {
		out << item.getQuantity() << " x " 
			<< item.getProduct().getName() 
			<< " (" << item.getProduct().getPrice() << ")" 
			<< " = " << invoice.computeItemTotal(item)
			<< endl;
	}

	out << "Subtotal: " << invoice.computeSubtotal() << endl;
}
