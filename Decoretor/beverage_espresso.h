#ifndef BEVERAGE_ESPRESSO_H
#define BEVERAGE_ESPRESSO_H

#include "beverage.h"

/**** 具体的饮料类 ****/
class Espresso:public Bervage{
public:
    Espresso(){
        description = " Espresso ";
    }
    double cost(){
        return 1.99;
    }
};

#endif // BEVERAGE_ESPRESSO_H
