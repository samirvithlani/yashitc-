#include<iostream>
using namespace std;

class Points{

    public:
        int x=100; //--> instance variable...
        int y=200; //--> instance variable...


        void swap(int x){  // local varibale,,, -->

            int y = 2000;
           
            cout<<"\n value of x = "<<this->x;
            cout<<"\n value of x = "<<y;
        }




};
int main(){

    Points p;
    p.swap(10);

}