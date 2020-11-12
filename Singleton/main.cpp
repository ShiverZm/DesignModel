#include <iostream>
#include <Hungry/singleton_hungry.hpp>
#include <Lazy/singleton_lazy1.hpp>
//#include <Base/singleton_base.hpp>
#include <thread>
using namespace std;
mutex MyLock;
/*
 *
 * 问题：开三个线程，使之变量A = 0，累加到100，顺序执行？
 *
 */

//void ThreadFunc1(){
//    while(1){
//        if(SingletonBase::GetInstance()->counter >100){
//            return;
//        }
//        cout<<(SingletonBase::GetInstance()->counter++)<<endl;
//    }
//}

void ThreadFunc2(){
    while(1){
        MyLock.lock();
        if(SingletonLazy1::GetInstance()->counter >100){
            MyLock.unlock();
            return;
        }
        cout<<(SingletonLazy1::GetInstance()->counter++)<<endl;
        MyLock.unlock();
    }
}

void ThreadFunc3(){
    while(1){
        MyLock.lock();
        if(SingletonHungry::GetInstance()->counter >100){
            MyLock.unlock();
            return;
        }
        cout<<(SingletonHungry::GetInstance()->counter++)<<endl;
        MyLock.unlock();
    }
}



int main()
{

////   use Base
//    thread th1(ThreadFunc1);
//    thread th2(ThreadFunc1);
//    thread th3(ThreadFunc1);

//    th1.join();
//    th2.join();
//    th3.join();

//// use Lazy
//    thread th1(ThreadFunc2);
//    thread th2(ThreadFunc2);
//    thread th3(ThreadFunc2);

//    th1.join();
//    th2.join();
//    th3.join();


    thread th1(ThreadFunc3);
    thread th2(ThreadFunc3);
    thread th3(ThreadFunc3);

    th1.join();
    th2.join();
    th3.join();

    return 0;
}

