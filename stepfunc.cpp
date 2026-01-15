#include<iostream>
#include "stepfunc.h"

double stepfunc::Calculate(double x) const{
    if(x<0.5){
        return 1;
    }
    else if(x>0.5){
        return -1;
    }
}