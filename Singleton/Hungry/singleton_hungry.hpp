#include <iostream>
#include <mutex>

using namespace std;

/**
 * hungry mode
 */

class SingletonHungry
{
protected:
    SingletonHungry(){
        cout<<"SingletonHungry created"<<endl;
    };
    ~SingletonHungry(){
        cout<<"SingletonHungry destoryed"<<endl;
    };
private:
    static SingletonHungry* ptr;

public:
    static SingletonHungry* GetInstance(){
       return ptr;
    }

    static int counter;

};

SingletonHungry* SingletonHungry::ptr=new SingletonHungry;
int SingletonHungry::counter = 0;
