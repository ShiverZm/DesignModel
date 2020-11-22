#ifndef CONDIMENT_WHIP_H
#define CONDIMENT_WHIP_H

#include "decorator_condiment.h"

class Whip:public CondimentDecorator{
public:
    Whip(Bervage *ptr){
        pBervage = ptr;
    }
    string getDescription(){
        return " Whip "+pBervage->getDescription();
    }
    double cost(){
        return 0.5+pBervage->cost();
    }
};

#endif // CONDIMENT_WHIP_H
