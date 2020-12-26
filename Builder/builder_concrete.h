#ifndef BUILDER_CONCRETE_H
#define BUILDER_CONCRETE_H
#include "product.h"
#include "builder.h"

class ConcreteBuilder:public Builder
{
private:
    Product * productPtr = new Product;
public:
    void BuildPartA() override{
        productPtr->Add("A","薯条");
    }

    void BuildPartB() override{
        productPtr->Add("B","汉堡");
    }
    Product * GetProduct() override{
        return productPtr;
    }
};

#endif // BUILDER_CONCRETE_H
