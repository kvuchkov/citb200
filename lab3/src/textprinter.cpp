#include <ostream>
#include <iomanip>
#include "textprinter.h"
#include "discountedInvoice.h"

using std::vector;
using std::left;
using std::right;
using std::setw;
using std::setfill;
using std::endl;

void separator(std::ostream &out, const vector<int> &columns) {
    out << '+' << right;
    out << setfill('-');
    for (int i = 0; i < columns.size(); i++) {
        out << setw(columns[i] + 1) << '+';
    }
    out << endl;
    out << setfill(' ');
}

void TextPrinter::print(std::ostream &out, Invoice &invoice) {
    vector<int> columns = {8, 40, 10, 10};

    out << std::setprecision(2) << std::fixed;

    {
        int c = 0;
        out << ' ';
        for (int colIdx = 0; colIdx < columns.size(); colIdx++) {
            out << setw(columns[colIdx]);
            if (colIdx == 1)
                out << left;
            else
                out << right;

            switch (colIdx) {
                case 0:
                    out << "QTY";
                    break;
                case 1:
                    out << "ITEM";
                    break;
                case 2:
                    out << "PRICE";
                    break;
                case 3:
                    out << "AMOUNT";
                    break;
            }
            out << ' ';
        }
        out << endl;
        separator(out, columns);
    }

    for (int i = 0; i < invoice.count(); i++) {
        int c = 0;
        out << '|';
        for (int colIdx = 0; colIdx < columns.size(); colIdx++) {
            out << setw(columns[colIdx]);
            if (colIdx == 1)
                out << left;
            else
                out << right;

            switch (colIdx) {
                case 0:
                    out << invoice.quantityAt(i);
                    break;
                case 1:
                    out << invoice.productAt(i).getName();
                    break;
                case 2:
                    out << invoice.productAt(i).getPrice();
                    break;
                case 3:
                    out << invoice.totalAt(i);
                    break;
            }
            out << '|';
        }
        out << endl;
        separator(out, columns);
    }

    int summaryOffset = 0;
    for (int i = 0; i < columns.size() - 1; i++)
        summaryOffset += columns[i] + 1;
    int lastColumn = columns.back();

    vector<int> totalsColumns = {lastColumn};

    out << setw(summaryOffset) << "Subtotal" << '|' << setw(lastColumn) << invoice.subtotal() << '|' << endl;
    out << setw(summaryOffset) << ""; separator(out, totalsColumns);
    out << setw(summaryOffset) << "Taxes" << '|' << setw(lastColumn) << invoice.taxes() << '|' << endl;
    out << setw(summaryOffset) << ""; separator(out, totalsColumns);
    out << setw(summaryOffset) << "TOTAL" << '|' << setw(lastColumn) << invoice.total() << '|' << endl;
    out << setw(summaryOffset) << ""; separator(out, totalsColumns);
}
