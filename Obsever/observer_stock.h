#ifndef OBSERVER_STOCK_H
#define OBSERVER_STOCK_H

#include <string>
#include <observer.h>
#include <subject.h>
#include <iostream>

//具体的观察者，看股票的
class StockObserver :public Observer
{
public:
    StockObserver(std::string name, Subject *sub) :Observer(name, sub)
    {
    }
    void update();
};


void StockObserver::update()
{
    std::cout << name << " 收到消息：" << sub->action << std::endl;
    if (sub->action == "梁所长来了!")
    {
        std::cout << "我马上关闭股票，装做很认真工作的样子！" << std::endl;
    }
}

#endif // OBSERVER_STOCK_H
