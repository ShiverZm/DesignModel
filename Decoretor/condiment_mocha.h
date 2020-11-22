#ifndef CONDIMENT_MOCHA_H
#define CONDIMENT_MOCHA_H

#include "decorator_condiment.h"

/**** 具体的调料类 ****/
class Mocha:public CondimentDecorator{
public:
    Mocha(Bervage *ptr){
        pBervage = ptr;
    }
    string getDescription(){
        return " Mocha "+pBervage->getDescription();
    }
    double cost(){
        return 0.2+pBervage->cost();
    }
};

#endif // CONDIMENT_MOCHA_H
