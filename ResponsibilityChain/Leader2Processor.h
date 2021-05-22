#ifndef LEADER2PROCESSOR_H
#define LEADER2PROCESSOR_H
#include <AbstractProcessor.h>
#include <stdio.h>
class Leader2Processor:public AbstractProcessor{
public:
    void handlerRequest(LeaveRequest* request) override{
        if(request->m_iLeaveDays >=AbstractProcessor::MIDDLE){
            printf("Leader2:%s,proceess,finished!\n",handlerName.c_str());

            if(nullptr != this->nextHandler){
                printf("Leader2 ->next \n");
                this->nextHandler->handlerRequest(request);
            }else{
                printf("process reject;\n");
            }

        }else{
            printf("not %s duty\n",handlerName.c_str());
            return;
        }


    }
};

#endif // LEADER1PROCESSOR_H
