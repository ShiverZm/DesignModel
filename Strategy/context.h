#ifndef CONTEXT_H
#define CONTEXT_H

#include <strategy.h>

class Context
{
private:
    Strategy *ptrStrategy;
public:
    Context(Strategy *ptr){
        ptrStrategy = ptr;
    }

    ~Context(){
        delete ptrStrategy;
    }

    int ExecuteStrategy(int num1, int num2){
       return ptrStrategy->DoOperation(num1,num2);
    }


};

#endif // CONTEXT_H
