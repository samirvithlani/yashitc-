#include<iostream>
using namespace std;

class Vehicle{

    //instance variable.. which are declare at class level
    //by default...

    int vId;
    string vName;
    public:

    void viewVehicle();

    void addVehicle(){

        cout<<"\n add vid";
        cin>>vId;
    }

};

//:: scope resolution operator...

void Vehicle :: viewVehicle(){


    cout<<"\n vid ="<<vId;
}

int main(){

    Vehicle v;
    v.addVehicle();
    v.viewVehicle();

}
