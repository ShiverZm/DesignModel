#ifndef STRATEGY_H
#define STRATEGY_H


class Strategy {
public:
    virtual int DoOperation(int num1, int num2) = 0;
};
#endif // STRATEGY_H
