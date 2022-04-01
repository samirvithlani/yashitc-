#include<iostream>
using namespace std;

class Test{

    public:
    int x;
    Test(){
        x = 100;
    }
    Test(int a){
        x = a;
    }

    void operator +(Test t){
        
        cout<<"+ operator overloading"<<endl;
        x = x + t.x;

    }
    void display(){

        cout<<"x is "<<x<<endl;
    }
};
int main(){


    Test t1(100);
    Test t2(20);
    --t2;
    t1.display();


}

