#include<iostream>
using namespace std;

int main(){


    try{
        throw 'a';
    }
    catch(int x){
        cout<<"\n inside catch block int"<<x;
    }
    catch(...){
        cout<<"\n inside catch block ...";
    }
    
    
}