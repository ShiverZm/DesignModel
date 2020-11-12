#ifndef STRATEGY_SUBSTRACT_H
#define STRATEGY_SUBSTRACT_H

#include <strategy.h>

class StrategySubstract :public Strategy
{
    int DoOperation(int num1, int num2) override;
};

int StrategySubstract::DoOperation(int num1, int num2){
    return num1 - num2;
}
#endif // STRATEGY_SUBSTRACT_H
