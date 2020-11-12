#include <iostream>
#include <mutex>

using namespace std;

/**
 * use lock
 */

class SingletonLazy1
{
protected:
    SingletonLazy1(){
        cout<<"   SingletonLazy1 created"<<endl;
    };
    ~SingletonLazy1(){
        cout<<"   SingletonLazy1 destoryed"<<endl;
    };
private:
    static SingletonLazy1* ptr;

public:
    static mutex singleton_lock;
    static SingletonLazy1* GetInstance(){

        singleton_lock.lock();
        if (ptr== NULL){
            ptr = new  SingletonLazy1();
        }
        singleton_lock.unlock();

        return ptr;
    }

    static int counter;
};
mutex SingletonLazy1::singleton_lock;
SingletonLazy1* SingletonLazy1::ptr=NULL;
int SingletonLazy1::counter = 0;
