#include<iostream>
#include<thread>
#include<string>
#include<mutex>

using namespace std;

mutex mu;

void shared(string name,int id){

    mu.lock();
    cout<<"\n "<<name <<" : "<<id;
    mu.unlock();

}
void thread_function(){

    for(int i=-100;i<0;i++){
        shared("\n Thrad_function",i);
    }
}

int main(){

    thread t(&thread_function);
    for(int i=0;i<=100;i++){

        shared("\n main thread",i);
    }
    t.join();
}