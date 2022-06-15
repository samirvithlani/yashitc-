//thread with callable objects / class

#include<iostream>
#include<thread>
using namespace std;

class MyThread{

    public:
    void operator()(){
        cout<<"Hello from thread"<<endl;
    }
    void operator()(){
        cout<<"Hello from thread2"<<endl;
    }
};

int main(){

    MyThread mt;
    //thread start
    thread t(mt);
    t.join();


}