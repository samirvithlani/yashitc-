#include<iostream>
#include<thread>
#include<string>
using namespace std;

void thread1(string name){
    cout<<"\n Hello from   "<<name<<endl;
}

void sum(){

    cout<<"\n\n sum called....";
    for(int i=1;i<5;i++){
        cout<<"\n "<<i;
    }
}

int main(){


    thread t1(&thread1,"samir");
    
    //t1.join();
//    thread t2(&thread1,"samir");
  //  t2.join();

    for(int i=0;i<=10;i++){
        cout<<"\n "<<i;
    }
    sum();
    
    cout<<"\n MAIN THREAD ID"<<this_thread::get_id()<<endl;
    cout<<"\n T1 thread id ="<<t1.get_id()<<endl;
    t1.join();

    thread t2(&thread1,"dhoni");

    cout<<"\n no of threads = "<<thread::hardware_concurrency()<<endl;

    t2.join();

/*
    for(int i=0;i<=5;i++){

        thread t3(&thread1,"samir");
        t3.join();

    }
    */

}