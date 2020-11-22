#include <iostream>
#include "beverage_espresso.h"
#include "beverage_tea.h"
#include "condiment_mocha.h"
#include "condiment_whip.h"

using namespace std;

int main()
{
    Espresso esp;
    Mocha mocha(&esp);
    cout<<mocha.cost()<<endl;
    cout<<mocha.getDescription()<<endl;

    Mocha dmocha(&mocha);
    cout<<dmocha.cost()<<endl;
    cout<<dmocha.getDescription()<<endl;

    Whip wdmocha(&dmocha);
    cout<<wdmocha.cost()<<endl;
    cout<<wdmocha.getDescription()<<endl;
    return 0;
}
