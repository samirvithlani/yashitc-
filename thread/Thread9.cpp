#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<vector>
using namespace std;

void add(vector<int> v){

    cout<<"\n adding data :";
    for(int i=0;i<v.size();i++){
        v[i]++;
    }
}

void print(vector<int> v){

    cout<<"\n printing data:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void print1(vector<int> v){

    cout<<"\n printing data:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v;
    for(int i=1;i<11;i++){
        v.push_back(i);
    }
    thread t1(add,v);
    thread t2(print,v);
    thread t3(print1,v);
    t1.join();
    t2.join();
    t3.join();
    return 0;
    

}