#include <iostream>

using namespace std;


class SingletonBase
{
protected:
    SingletonBase(){
        cout<<"SingletonBase created"<<endl;
    };
    ~SingletonBase(){
        cout<<"SingletonBase destoryed"<<endl;
    };
private:
    static SingletonBase* ptr;
public:
    static SingletonBase* GetInstance(){
        if (ptr== NULL){
            ptr = new  SingletonBase();
        }
        return ptr;
    }

};

SingletonBase* SingletonBase::ptr=NULL;
