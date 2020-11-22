#ifndef BEVERAGE_TEA_H
#define BEVERAGE_TEA_H
#include "beverage.h"

class Tea:public Bervage{
public:
    Tea(){
        description = " Tea ";
    }
    double cost(){
        return 1.05;
    }
};

#endif // BEVERAGE_TEA_H
