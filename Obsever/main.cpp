#include <iostream>
#include <string>
#include <list>

#include <observer_nba.h>
#include <observer_stock.h>
#include <subject.h>
#include <subject_sercretary.h>

using namespace std;

void NBAObserver::update()
{
    cout << name << " 收到消息：" << sub->action << endl;
    if (sub->action == "梁所长来了!")
    {
        cout << "我马上关闭NBA，装做很认真工作的样子！" << endl;
    }
}

int main()
{
    Subject *dwq = new Secretary(); //创建观察者<br>　　　　//被观察的对象
    Observer *xs = new NBAObserver("xiaoshuai", dwq);
    Observer *zy = new NBAObserver("zouyue", dwq);
    Observer *lm = new StockObserver("limin", dwq);
    //加入观察队列
    dwq->attach(xs);
    dwq->attach(zy);
    dwq->attach(lm);
    //事件
    dwq->action = "去吃饭了！";
    dwq->notify();
    cout << endl;
    dwq->action = "梁所长来了!";
    dwq->notify();
    return 0;
}
