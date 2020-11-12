#ifndef STRATEGY_MULTIPLY_H
#define STRATEGY_MULTIPLY_H

#include <strategy.h>

class StrategyMultiply :public Strategy
{
    int DoOperation(int num1, int num2) override;
};

int StrategyMultiply::DoOperation(int num1,int num2){
    return num1*num2;
}

#endif // STRATEGY_MULTIPLY_H
