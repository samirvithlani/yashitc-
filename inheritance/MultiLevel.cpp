#include<iostream>
using namespace std;

class Gov{

    public:
    int tax;
     void getTax(){
            cout<<"gov tax = "<<tax<<endl;
        }
};
class State:public Gov{

    public:
    int grant;
    void getTax(){
        cout<<"state tax = "<<tax<<endl;
    }

    
};
class Local:public State{
public:
    void getTax(){
            
            cout<<"local tax = "<<tax<<endl;
        }
};


int main(){


    Local l;
    l.getTax();

    return 0;

}