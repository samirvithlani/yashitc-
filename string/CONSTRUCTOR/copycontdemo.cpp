#include<iostream>
using namespace std;

class Wall{

    private:
    double length;
    double heigth;

    public:
    Wall(double len,double hei){
        length = len;
        heigth = hei;
    }

// wall(){}
//     Wall(Wall &w){

//         cout<<"\n copy constructor called";

//         length = w.length;
//         heigth = w.heigth;
//     }

    double area(){
        return length*heigth;
    }
};
int main(){

    Wall w1(10,20);
    Wall w2(w1);

    w2 = w1;

    cout<<"Area of Wall 1 = "<<w1.area();
    cout<<"Area of Wall 2 = "<<w2.area();

}