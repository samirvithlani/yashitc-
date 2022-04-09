#include<iostream>
using namespace std;

int main(){

    int x =-1,y=2;

    cout<<"\n before try block";
    try{
        cout<<"\n inside try block";
        if(x<0){
            throw x;
            //throw;
            cout<<"\n after try block.............";
        }
        else{
            throw y;
        }
    }
    catch(int x){
        cout<<"\n inside catch block"<<x;
    }
    

    cout<<"\n after try catch block";

}