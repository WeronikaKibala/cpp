#include <iostream>
#ifndef sinf
#include "mathfunc.h"

class sinfunc:public mathfunc{
    public:
    sinfunc(int w);
    double Calculate(double x) const;
    mathfunc* Clone();
};





#endif