#include <iostream>
#include "calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(argc < 3)
        return -1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    Calc calc(a, b);
    cout << "calc(" << a << ", " << b << ") -> " << calc.calculate() << endl;
    return 0;
}