#ifndef OBSERVER_NBA_H
#define OBSERVER_NBA_H

#include <string>
#include <observer.h>

class Subject;

//具体的观察者，看NBA的
class NBAObserver :public Observer
{
public:
    NBAObserver(std::string name, Subject *sub) :Observer(name, sub)
    {
    }
    void update();
};


#endif // OBSERVER_NBA_H
