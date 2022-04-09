#include<iostream>
using namespace std;

void test(int x){
    try{
    if(x>0){
        throw x;
    }
    else{
        throw 'X';
    }
    }
    catch(int x){
        cout<<"\n inside catch block int"<<x;
    }
    catch(char x){
        cout<<"\n inside catch block char"<<x;
    }
}


int main(){


    test(0);
}