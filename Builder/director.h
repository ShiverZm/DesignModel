#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "builder.h"

class Product;
class Builder;

class Director
{
private:
    Builder *builderPtr;
public:
    Director(Builder *builder){
        builderPtr = builder;
    }

    void Build(){
        builderPtr->BuildPartA();
        builderPtr->BuildPartB();
    }

    Product* GetResult(){
        return builderPtr->GetProduct();
    }


};

#endif // DIRECTOR_H
