#include<iostream>
#include<thread>
using namespace std;

void thread_function(){

    for(int i= -100;i<0;i++){
        cout<<"\n thread function -> "<<i;
    }
}

int main(){

    thread t(&thread_function);
    for(int i=0;i<=100;i++){
        cout<<"\n main thread  :"<<i;
    }
    t.join();
}