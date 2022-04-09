#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    try{
        cout<<"\n enter x";
        cin>>x;
        cout<<"\n enter y";
        cin>>y;
        z = x/y;
        
        cout<<"\n z = "<<z;
        


    }
    catch(...){
        cout<<"\n inside catch block ...";
    }
}