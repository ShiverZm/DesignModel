#include <iostream>

using namespace std;

#include <AbstractProcessor.h>
#include <Leader1Processor.h>
#include <Leader2Processor.h>
#include <Leader3Processor.h>


int main()
{
    LeaveRequest request;

    Leader1Processor processor1;
    processor1.handlerName = "Leader1";
    Leader2Processor processor2;
    processor2.handlerName = "Leader2";
    Leader3Processor processor3;
    processor3.handlerName = "Leader3";

    processor1.setNextHandler(&processor2);
    processor2.setNextHandler(&processor3);

    request.m_iLeaveDays = 20;
    request.m_strName = "Shiver";

    printf("%s request Leave for %d\n",request.m_strName.c_str(),request.m_iLeaveDays);
    printf("request start\n");
    processor1.handlerRequest(&request);
    printf("request end\n");
    return 0;
}
