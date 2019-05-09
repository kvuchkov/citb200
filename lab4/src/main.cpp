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
        int r;
        int a, b, c;
        switch (type)
        {
        case 'c':
            shapesData >> r;
            shapes.push_back(new Circle(r));
            break;
        case 'r':
            shapesData >> a >> b;
            shapes.push_back(new Rectangle(a, b));
            break;
        case 't':
            shapesData >> a >> b >> c;
            shapes.push_back(new Triangle(a, b, c));
            break;
        default:
            break;
        }
    }

    for (auto shape : shapes)
    {
        cout << shape->area() << endl;
    }
    return 0;
}
