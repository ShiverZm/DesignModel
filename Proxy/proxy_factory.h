#ifndef PROXY_FACTORY_H
#define PROXY_FACTORY_H
#include "ifactory.h"
#include <iostream>

using namespace std;

class FoxconnProxy : public IFactory
{
public:
    FoxconnProxy(IFactory* factory)
    {
        m_real = factory;
    }

    void makeProduct()
    {
        m_real->makeProduct();
    }

private:

IFactory* m_real;

};

#endif // PROXY_FACTORY_H
