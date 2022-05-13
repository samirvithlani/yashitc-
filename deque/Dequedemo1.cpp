#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){

    deque<string> dq;
    dq.push_back("A");
    dq.push_back("B");
    dq.push_back("C");
    dq.push_back("D");
    dq.push_back("E");
    dq.push_front("X");
    dq.push_back("C");

    dq.pop_back();
    dq.insert(dq.end(), "Y");
    //dq.insert(dq.begin()+2,1,3);
    dq.insert(dq.begin()+2,10,"z");

    //dq.erase(dq.begin()+2);
   // dq.erase(dq.begin()+2, dq.end());

    cout<<"0->"<<dq.at(0);

    for(auto it = dq.begin(); it != dq.end(); it++){
        cout<<*it<<" ";
    }    




    //dq.find(dq.begin(), dq.end(), 'c');
     
}