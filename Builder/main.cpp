#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "product.h"
#include "director.h"
#include "builder_concrete.h"

int main()
{
    std::cout<<"start build"<<std::endl;
    Builder *builderPtr = new ConcreteBuilder();
    Director* directorPtr = new Director(builderPtr);

    directorPtr->Build();
    Product* productPtr = directorPtr->GetResult();

    if(productPtr->itemList.find("A") != productPtr->itemList.end()){
        std::cout<< "product partA:"<< productPtr->itemList["A"].c_str() << std::endl;
    }

    if(productPtr->itemList.find("B") != productPtr->itemList.end()){
        std::cout << "product partB:"<< productPtr->itemList["B"].c_str() << std::endl;
    }

    std::cout<<"end build"<<std::endl;
    return 0;
}
