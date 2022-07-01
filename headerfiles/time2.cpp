#include<iostream>
#include<ctime>
#include<chrono>

using namespace std;

int main(){

    using namespace std::chrono;

    milliseconds mil(1000);
    mil  = mil *60;

    cout<<"\n duration in period";
    cout<<mil.count()<<" milliseconds"<<endl;

    cout<<"\n duration in seconds";
    cout<<(mil.count()*milliseconds::period::num)/milliseconds::period::den<<" seconds"<<endl;

}
