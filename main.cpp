#include <iostream>
#include <cstdlib>
#include "mathfunc.h"
int main(int argc, char**argv){

    int type=atoi(argc);
    int w=atoi(argv);
    mathfunc *f;

    if(argc==0){
        f=new stepfunc;
    }
    else if(argc==1){
        f= new sinfunc;
    }
    else if(argc==2){
        f= new cosfunc;
    }



}