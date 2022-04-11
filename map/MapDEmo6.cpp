#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<char, string> employees;
    employees['a'] = "John";
    employees['b'] = "Mary";
    employees['c'] = "Peter";
    employees['d'] = "Sara";
    employees['e'] = "Mike";
    
    if(employees.empty()){
        cout<<"\n map is empty";
    }
    else{
        cout<<"\n map is not empty";
    }
    

    map<char, string>::iterator it;
    for (it = employees.begin(); it != employees.end(); it++)
    {

        cout << "\n"
             << it->first << " " << it->second;
    }
}