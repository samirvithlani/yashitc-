#include<iostream>

using namespace std;

class Car{


    public:
    int x;
    Car(){

        cout<<"\n default const called....";
        x = 1500;
    }

    Car(int a,string name){
        x = 2500;
        cout<<"\n param const"<<a;
        cout<<name;
    }

};

int main(){

    Car c1;
    Car c(1500,"mm");

    cout<<"\n value of x ="<<c.x;

}
