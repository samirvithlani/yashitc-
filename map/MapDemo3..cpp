#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){


    map<int, string> employees;
    employees[101] = "John";
    employees[102] = "Mary";
    employees[103] = "Peter";
    employees[104] = "Sara";
    employees[105] = "Mike";
    employees[103] = "Hritik";


    for(auto&x : employees){

        cout<<"\n key = "<<x.first<<" value = "<<x.second;
    }

}
