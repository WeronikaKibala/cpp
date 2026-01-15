#include <iostream>
#ifndef jfjf
#define jfjf

class multifunc;

class mathfunc{
    public:
    mathfunc(int type);
    virtual double Calculate(double x) const=0;
    double Integrate() const;
    ultifunc void DFT(int n);
    virtual mathfunc*Clone();
    private:
    double x;
    int n;
    int type;

};

#endif