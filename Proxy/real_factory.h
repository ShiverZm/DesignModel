#ifndef REAL_FACTORY_H
#define REAL_FACTORY_H

#include "ifactory.h"
#include <iostream>

using namespace std;

class PhoneFactory : public IFactory
{

public:

    PhoneFactory(){}

    void makeProduct()
    {
        cout<<"PhoneFactory 生产手机"<<endl;
    }

};

#endif // REAL_FACTORY_H
