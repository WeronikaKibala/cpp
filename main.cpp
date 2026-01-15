#include <iostream>
#include <cstdlib>
#include "mathfunc.h"
int main(int type, char*argv()){

    std::string argv;
    int w=atoi(argv);
    mathfunc *f;

    if(type==0){
        f=new stepfunc;
    }
    else if(type==1){
        f= new sinfunc;
    }
    else if(type==2){
        f= new cosfunc;
    }



}