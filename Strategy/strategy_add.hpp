#ifndef STRATEGY_ADD_H
#define STRATEGY_ADD_H

#include <strategy.h>
class StrategyAdd :public Strategy{

    int DoOperation(int num1, int num2) override;
};

int StrategyAdd::DoOperation(int num1,int num2){
    return num1+num2;
}


#endif // STRATEGY_ADD_H
