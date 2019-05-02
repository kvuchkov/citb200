#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

Shape *createShape(char type);

using std::vector;
using std::ifstream;
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        cerr << "Invalid use!" << endl;
        return -1;
    }

    string shapesDataFile = argv[1];

    cerr << "Reading " << shapesDataFile << " file..." << endl;

    ifstream shapesData(shapesDataFile);

    char type;
    while(shapesData >> type) {
        int r;
        switch (type)
        {
            case 'c':
                shapesData >> r;
                new Circle(r);
                break;
            default:
                break;
        }
    }

    return 0;
}

