#include<iostream>
using namespace std;

template<class T,class S>
class ListDemo{
    public:
        T push_back(T a,S b){
            cout<<"push_back  "<<a<<endl;
            cout<<"\n"<<b;
        }


};

int main(){

    ListDemo<int,char> l;
    l.push_back(10,65);

}

