#include <iostream>
#include <vector>
#include <fstream>
#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

Shape *createShape(char type);

using std::vector;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        cerr << "Invalid usage! Expected:" << endl << "./lab4 /path/to/input" << endl;
        return -1;
    }

    string inputsPath = argv[1];

    cerr << "Reading shapes from " << inputsPath << "..." << endl;

    ifstream inputs(inputsPath);

    string word;
    while (inputs >> word) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

