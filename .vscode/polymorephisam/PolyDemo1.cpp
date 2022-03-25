#include<iostream>
using namespace std;

class RBI{

public:
    virtual void deposit()=0;
    
};
class ICICI:public RBI{

public:
    void deposit()
    {
        cout<<"\n ICICI::deposit()";
    }

};
class SBI:public RBI{

public:
    void deposit()
    {
        cout<<"\n SBI::deposit()";
    }

};

int main(){

    RBI *rbi;   
    //rbi = new ICICI();
    ICICI i;
    rbi = &i;
    rbi->deposit();



}