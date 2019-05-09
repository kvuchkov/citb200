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
        auto shape = createShape(type);
        if (shape->read(inputs))
        {
            shapes.push_back(shape);
        }
    }

    for (auto shape : shapes)
    {
        cout << "S=" << shape->area() << "; P=" << shape->perimeter() << ";" << endl;
    }

    return 0;
}

Shape *createShape(char type)
{
    switch (type)
    {
    case 'c':
        return new Circle();
    case 'r':
        return new Rectangle();
    case 't':
        return new Triangle();
    default:
        return 0;
    }
}
