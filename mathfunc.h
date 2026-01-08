#include <iostream>
#ifndef jfjf
#define jfjf

class mathfunc{
    public:
    double Calculate(double x);
    double Integrate();
    void DFT(int n);
    mathfunc*Clone();
    private:
    double x;
    int n;

};

#endif