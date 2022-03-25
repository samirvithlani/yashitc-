#include<iostream>
using namespace std;
class Demo{

    private:
    int a=10;
    
    protected:
    virtual void print() = 0;
    int b=20;
    public:
    int c=30;

public:
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }

};

class ChildDemo : public Demo{

    public:
    void display1(){
        //cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }

};
int main(){

    Demo d;
    ChildDemo cd;
    d.display();
    cd.display1();

    //cout<<d.a<<endl;
   /// cout<<d.b<<endl;
    //cout<<d.c<<endl;


}