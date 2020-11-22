#include <iostream>
#include "ifactory.h"
#include "proxy_factory.h"
#include "real_factory.h"

using namespace std;

int main()
{
    IFactory* factory = new PhoneFactory();

    FoxconnProxy* proxy =  new FoxconnProxy(factory);

    proxy->makeProduct();

    return 0;
}
