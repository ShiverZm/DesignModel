#ifndef SUBJECT_SERCRETARY_H
#define SUBJECT_SERCRETARY_H
#include <subject.h>
#include <list>
#include <observer.h>

class Secretary :public Subject
{
    void attach(Observer *observer)
    {
        observers.push_back(observer);
    }
    void detach(Observer *observer)
    {
        std::list<Observer *>::iterator iter = observers.begin();
        while (iter != observers.end())
        {
            if ((*iter) == observer)
            {
                observers.erase(iter);
            }
            ++iter;
        }
    }
    void notify()
    {
        std::list<Observer *>::iterator iter = observers.begin();
        while (iter != observers.end())
        {
            (*iter)->update();
            ++iter;
        }
    }
};


#endif // SUBJECT_SERCRETARY_H
