/*
    == equal operator overloading
*/
#include<iostream>
using namespace std;

class Time{

    public:
    int hr,min,sec;

    Time(){
        hr = 0;
        min = 0;
        sec = 0;
    }

    Time(int h,int m,int s){
        hr = h;
        min = m;
        sec = s;
    }

    friend bool operator == (Time &t1,Time &t2){

        if(t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

        Time t1(10,20,30);
        Time t2(11,20,30);

        if(t1 == t2){
            cout<<"equal"<<endl;
        }
        else{
            cout<<"not equal"<<endl;
        }


}