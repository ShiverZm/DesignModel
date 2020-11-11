#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include <string>

class Observer;

//抽象通知者
class Subject
{
protected:
    std::list<Observer*> observers;
public:
    std::string action;
    virtual void attach(Observer*) = 0;
    virtual void detach(Observer*) = 0;
    virtual void notify() = 0;
};

#endif // SUBJECT_H
