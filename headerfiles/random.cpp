#include<iostream>
#include<chrono>
#include<random>
#include<ctime>
#include<sys/time.h>

using namespace std;
int main(){


        time_t now = time(0);    
        cout<<"\n time \n "<<time(0)<<endl;
        char* dt =ctime(&now);
        cout<<"\n ctime \n "<<dt<<endl;
        tm *gmtm  =gmtime(&now);
        dt = asctime(gmtm);
        cout<<"\n "<<dt;



}
