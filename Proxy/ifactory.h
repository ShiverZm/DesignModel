#ifndef IFACTORY_H
#define IFACTORY_H

class IFactory
{
public:
    IFactory(){

    }
    virtual void makeProduct() = 0;
};
#endif // IFACTORY_H
