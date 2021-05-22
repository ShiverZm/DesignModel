#ifndef LEADER1PROCESSOR_H
#define LEADER1PROCESSOR_H
#include <AbstractProcessor.h>
#include <stdio.h>
class Leader1Processor:public AbstractProcessor{
public:
    void handlerRequest(LeaveRequest* request) override{
        if(request->m_iLeaveDays >= AbstractProcessor::MIN){
            printf("Leader1:%s,proceess,finished!\n",handlerName.c_str());
            if(nullptr != this->nextHandler){
                printf("Leader1 ->next \n");
                this->nextHandler->handlerRequest(request);
            }else{
                printf("process reject\n");
            }

        }else{
            printf("not %s duty\n",handlerName.c_str());
            return;
        }


    }
};

#endif // LEADER1PROCESSOR_H
