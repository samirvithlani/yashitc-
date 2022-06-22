#include<iostream>
#include<thread>
#include<string>

using namespace std;

int main(){

    thread t([](){
        cout<<"\n thread lambda function:";
    });
    t.join();

}
