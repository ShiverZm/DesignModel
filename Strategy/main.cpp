#include <iostream>
#include <context.h>
#include <strategy.h>
#include <strategy_add.hpp>
#include <strategy_substract.hpp>
#include <strategy_multiply.h>

#include <iostream>

using namespace std;

int main()
{
    Context *ptrContextAdd = new Context(new StrategyAdd);
    int addRet = ptrContextAdd->ExecuteStrategy(2,2);
    cout<<"add = result:"<<addRet<<endl;


    Context *ptrContextSub = new Context(new StrategySubstract);
    int subRet = ptrContextSub->ExecuteStrategy(2,2);
    cout<<"substract result:"<<subRet<<endl;


    Context *ptrContextMul = new Context(new StrategyMultiply);
    int mulRet = ptrContextMul->ExecuteStrategy(2,2);
    cout<<"multiple result:"<<mulRet<<endl;

    return 0;
}
