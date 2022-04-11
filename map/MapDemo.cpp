#include <iostream>
#include <map>
#include <iterator>

//key value pair is used to store the key and value
//1 ""
//username password
using namespace std;

int main()
{

    map<int, string> employees;
    employees[101] = "John";
    employees[102] = "Mary";
    employees[103] = "Peter";
    employees[104] = "Sara";
    employees[105] = "Mike";
    employees[103] = "Hritik";

    cout<<"\n Enter the employee id to search: ";
    int id;
    cin>>id;
    cout<<"\n The employee name is: "<<employees[id];
    cout<<"\n len of map ="<<employees.size();

    map<int,string>::iterator it;
    
    for(it = employees.begin();it!=employees.end();it++){

        cout<<"\n"<<it->first<<" "<<it->second;
    }


    cout<<"\n 103 "<<employees.at(103);

}