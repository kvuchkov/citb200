#include "calc.h"
Calc::Calc(int a, int b) : a(a), b(b) { }
const int Calc::calculate() const {
    return a+b;
}