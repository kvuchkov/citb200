#include <iostream>
#include <vector>
#include <fstream>
#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

Shape *createShape(char type);

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        cerr << "Invalid usage! Expected:" << endl
             << "./lab4 /path/to/input" << endl;
        return -1;
    }

    string inputsPath = argv[1];

    cerr << "Reading shapes from " << inputsPath << "..." << endl;

    ifstream inputs(inputsPath);

    vector<Shape *> shapes;

    char type;
    while (inputs >> type)
    {
        int radius;
        int a, b, c;
        switch (type)
        {
        case 'c':
            inputs >> radius;
            shapes.push_back(new Circle(radius));
            break;
        case 'r':
            inputs >> a >> b;
            shapes.push_back(new Rectangle(a, b));
            break;
        case 't':
            inputs >> a >> b >> c;
            shapes.push_back(new Triangle(a, b, c));
            break;
        default:
            cerr << "Unrecognized shape " << type << endl;
            break;
        }
    }

    for (auto shape : shapes)
    {
        cout << "S=" << shape->area() << "; P=" << shape->perimeter() << ";" << endl;
    }

    return 0;
}
