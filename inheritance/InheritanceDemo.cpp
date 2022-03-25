#include<iostream>
using namespace std;

class Vehicle
{

    public:
    int makeyear;
};

class Car : public Vehicle
{

    public:
    void getCarData(){
        cout<<"Enter the make year of the car: ";
        cin>>makeyear;
    }

};
class Truck : public Vehicle
{

    public:
    void getTruckData(){
        cout<<"Enter the make year of the truck: ";
        cin>>makeyear;
    }

};


int main()
{
    Car c;
    c.getCarData();
    Truck t;
    t.getTruckData();
    
    return 0;
}