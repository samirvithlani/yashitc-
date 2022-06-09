#include<iostream>
#include<fstream>
#include<string>
using namespace std;

///c or cpp => file of string -> last '\0'
//string null --> file --> 

int main(){

    fstream file("C:\\Users\\Samir\\Desktop\\sample1.txt",ios::in|ios::out|ios::app);
    //file<<"hello world";
    char a[20];
    file.seekg(7,ios::beg);

    file.read(a,20);
    a[file.gcount()]='\0';
    auto x = file.gcount();
    cout<<x;
    cout<<a;
    file.remo
    file.close();

}