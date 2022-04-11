#include <iostream>
#include <map>
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

    employees.insert(pair<int, string>(104, "Raj"));
    employees.insert({{107,"harsh"},{108,"harsha"}});


    map<int, string>::iterator it;
    for (it = employees.begin(); it != employees.end(); it++)
    {

        cout << "\n"
             << it->first << " " << it->second;
    }
}