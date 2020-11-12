#ifndef OBSERVER_NBA_H
#define OBSERVER_NBA_H

#include <string>
#include <observer.h>
#include <iostream>
#include <subject.h>

class Subject;

using namespace std;

//具体的观察者，看NBA的
class NBAObserver :public Observer
{
public:
    NBAObserver(std::string name, Subject *sub) :Observer(name, sub)
    {
    }
    void update();
};


void NBAObserver::update()
{
    cout << name << " 收到消息：" << sub->action << endl;
    if (sub->action == "梁所长来了!")
    {
        cout << "我马上关闭NBA，装做很认真工作的样子！" << endl;
    }
}

#endif // OBSERVER_NBA_H
