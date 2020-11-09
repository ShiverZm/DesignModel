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
        cout<<"SingletonBase created"<<endl;
    };
    ~SingletonHungry(){
        cout<<"SingletonBase destoryed"<<endl;
    };
private:
    static SingletonHungry* ptr;

public:
    static SingletonHungry* GetInstance(){
       return ptr;
    }

};

SingletonHungry* SingletonHungry::ptr=new SingletonHungry;
