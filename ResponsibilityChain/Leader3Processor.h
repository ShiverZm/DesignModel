#ifndef LEADER3PROCESSOR_H
#define LEADER3PROCESSOR_H
#include <AbstractProcessor.h>
#include <stdio.h>

class Leader3Processor:public AbstractProcessor{
public:
    void handlerRequest(LeaveRequest* request) override{
        if(request->m_iLeaveDays<=AbstractProcessor::MAX){
            printf("Leader3:%s,proceess,finished!\n",handlerName.c_str());

            if(nullptr != this->nextHandler){
                printf("Leader3 ->next \n");
                this->nextHandler->handlerRequest(request);
            }else{
                printf("process end;\n");
            }
        }else{
            printf("not %s duty\n",handlerName.c_str());
            return;
        }


    }
};

#endif // LEADER1PROCESSOR_H
