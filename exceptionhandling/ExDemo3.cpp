#include<iostream>
using namespace std;

int main(){

    try{

        throw 10;
    }
    catch(...){
        cout<<"\n inside catch block ...";
    }
    catch(char * excp){
        cout<<"\n inside catch block char"<<excp;
    }
    

}
