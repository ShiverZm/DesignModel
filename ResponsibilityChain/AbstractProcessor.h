#ifndef ABSTRACTPROCESSOR_H
#define ABSTRACTPROCESSOR_H
#include <LeaveRequest.h>

class AbstractProcessor{
public:
        /**直接主管审批处理的请假天数**/
        const static int MIN = 1;
        /**部门经理处理的请假天数**/
        const static int MIDDLE = 7;
        /**总经理处理的请假天数**/
        const static int MAX = 30;

        /**领导名称*/
        std::string handlerName;

        /**下一个处理节点（即更高级别的领导）**/
        AbstractProcessor* nextHandler = nullptr;

        /**设置下一节点**/
        void setNextHandler(AbstractProcessor *handler){
            this->nextHandler = handler;
        }

        /**处理请假的请求，子类实现**/
        virtual void handlerRequest(LeaveRequest* request) = 0;
};

#endif // ABSTRACTPROCESSOR_H
