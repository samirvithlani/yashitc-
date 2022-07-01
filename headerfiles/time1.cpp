#include<iostream>
using namespace std;

int main(){

    time_t now = time(0);

    tm *ltm =localtime(&now);
    cout<<"YEAR"<<1900 +ltm->tm_year<<endl;
    cout<<"month"<<1+ltm->tm_mon<<endl;
    cout<<"day"<<ltm->tm_mday<<endl;
    cout<<"hour"<<ltm->tm_hour<<endl;
    cout<<"\n"<<ltm->tm_hour<<":";
    cout<<""<<ltm->tm_min<<":";
    cout<<ltm->tm_sec<<endl;


}