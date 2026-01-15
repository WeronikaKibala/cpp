#include <iostream>
#ifndef schod
#include "mathfunc.h"

class stepfunc:public mathfunc{
    public:
    double Calculate(double x) const;
    mathfunc* Clone();
};





#endif