#include <iostream>
#include <vector>
#include <fstream>
#include <string>
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
        cerr << "Invalid use!" << endl;
        return -1;
    }

    string shapesDataFile = argv[1];

    cerr << "Reading " << shapesDataFile << " file..." << endl;

    ifstream shapesData(shapesDataFile);

    char type;
    vector<Shape *> shapes;
    while (shapesData >> type)
    {
        cerr << "t:" << type << endl;
        auto shape = createShape(type);
        if (shape && shape->read(shapesData))
        {
            shapes.push_back(shape);
        }
    }

    for (auto shape : shapes)
    {
        cout << shape->area() << endl;
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
