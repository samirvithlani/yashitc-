//input fuctions of string getline ,push_back  pop_back
//capcity functions in string length

#include<iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

//royal
    str.push_back('#');
    str.pop_back();

    int len = str.length();
    cout<<"The string is : "<<str<<endl;
    cout<<"\n len of string is : "<<len<<endl;
}