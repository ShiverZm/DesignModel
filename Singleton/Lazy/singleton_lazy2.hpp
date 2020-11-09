#include <iostream>
#include <mutex>

using namespace std;

/**
 * use
 */

class SingletonLazy2
{
protected:
    SingletonLazy2(){
        cout<<"SingletonBase created"<<endl;
    };
    ~SingletonLazy2(){
        cout<<"SingletonBase destoryed"<<endl;
    };
private:
    static SingletonLazy2* ptr;

public:
    static mutex singleton_lock;
    static SingletonLazy2* GetInstance(){
        if (ptr== NULL){
            ptr = new  SingletonLazy2();
        }
        return ptr;
    }

};
SingletonLazy2* SingletonLazy2::ptr=NULL;
