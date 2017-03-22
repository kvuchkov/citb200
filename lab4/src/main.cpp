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

int main() {

    vector<Shape *> shapes;
    ifstream inFile("inputs/shapes.txt");

    if (inFile.fail()) {
        return -1;
    }

    char type;
    while (inFile >> type) {
        Shape *shape = createShape(type);
        shape->read(inFile);
        shapes.push_back(shape);
    }

    int number;
    char cmd;
    while (cin >> number && number > 0) {
        cin >> cmd;
        Shape *shape = shapes[number - 1];
        if (cmd == 'a')
            cout << shape->area() << endl;
        else if (cmd == 'p')
            cout << shape->perimeter() << endl;
        else
            cout << "Unknown Command " << cmd << endl;
    }

    for (int i = 0; i < shapes.size(); ++i) {
        delete shapes[i];
    }

    return 0;
}

Shape *createShape(char type) {
    Shape *result;
    switch (type) {
        case 'c':
            result = new Circle();
            break;
        case 't':
            result = new Triangle();
            break;
        case 'r' :
            result = new Rectangle();
            break;
        default:
            result = NULL;
    }
    return result;
}