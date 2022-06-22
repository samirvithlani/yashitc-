#include<iostream>
#include<thread>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

//glob
list<int> gtmyList;

void addToList(int max,int interval){
    for(int i=0;i<max;i++){
        if((i%interval)==0){
            gtmyList.push_back(i);
        }
    }
}
void printList(){
    for(auto x:gtmyList){
        cout<<"\n  "<<x;
    }
}

int main(){

        int max = 250;
        thread t1(&addToList,max,1);
        thread t2(&addToList,max,10);
        thread t3(&printList);


        t1.join();
        t2.join();
        t3.join();

}