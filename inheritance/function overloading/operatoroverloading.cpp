#include<iostream>
using namespace std;
//#operator overloading...  + - * / ++ -- == != > < >= <= 
//function ++ --> function --> ++

class Test{

    public:

    int num;
    Test(){
        num = 100;
    }

    void operator ++(){

        cout<<"++ operator overloading"<<endl;
        num = num * 100;
    }

    void print(){

        cout<<"num is "<<num<<endl;
    }

};

int main(){

    Test t1;
    int i=10;
    ++i;
    ++t1;
    t1.print();

}