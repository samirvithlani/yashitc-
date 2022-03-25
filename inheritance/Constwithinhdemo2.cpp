#include<iostream>
using namespace std;

class A{

    public:
    int x;
    A(){

        cout<<"A default constructor called"<<endl;
    }
    A(int a){
            x =a;
           cout<<"A param constructor called"<<endl;     
    }
};
class B : public A{

        public:
        B(){

            cout<<"B default constructor called"<<endl;
        }
        B(int b){

            cout<<"B param constructor called"<<endl;
        }

};
class C : public B{

        public:
        C(){

            cout<<"C default constructor called"<<endl;
        }
        C(int c):B(c){

            cout<<"C param constructor called"<<endl;
        }
};

int main(){


    C c;
    cout<<"c.x = "<<c.x<<endl;

}