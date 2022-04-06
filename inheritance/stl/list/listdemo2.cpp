#include<iostream>
#include<list>
#include<iterator>
using namespace std;

bool removeeven(const int& i){

    return i%2==0;
}

int main(){

    
    list<int> list1;
    for(int i=0;i<=4;i++){

        list1.push_back(i);
    }


    list<int> :: iterator it;

    for(it = list1.begin();it!= list1.end();it++){

        cout<<*it<<endl;
    }


    //list1.remove_if([](int i){return i%2==0;}); //remove all even numbers
    list1.remove_if(removeeven); //remove all even numbers

    cout<<"********************************"<<endl;
    for(it = list1.begin();it!= list1.end();it++){

        cout<<*it<<endl;
    }


}