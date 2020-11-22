#ifndef DECORATOR_CONDIMENT_H
#define DECORATOR_CONDIMENT_H

#include "beverage.h"

class CondimentDecorator:public Bervage{
protected:
    Bervage *pBervage;
};

#endif // DECORATOR_CONDIMENT_H
