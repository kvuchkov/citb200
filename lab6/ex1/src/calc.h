#ifndef LAB6_EX1_CALC_H
#define LAB6_EX1_CALC_H

class Calc {
public:
    Calc(int a, int b);
    const int calculate() const;
private:
    int b;
    int a;    
};

#endif //LAB6_EX1_CALC_H