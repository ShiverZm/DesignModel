#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>


class Subject;

class Observer
{
protected:
    std::string name;
    Subject *sub;
public:
    Observer(std::string name, Subject *sub)
    {
        this->name = name;
        this->sub = sub;
    }
    virtual void update() = 0;
};

#endif // OBSERVER_H
