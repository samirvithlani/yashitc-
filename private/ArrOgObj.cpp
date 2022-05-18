#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Emp{

    public:
    int salary;
    int age;

};

int main(){

    Emp e1;
    e1.salary = 1500;
    e1.age = 25;
    Emp e2;
    e2.salary = 2500;
    e2.age = 45;

    vector<Emp> employees;
    employees.push_back(e1);
    employees.push_back(e2);

    for(auto i = employees.begin();i!= employees.end();i++){

        cout<<"\n"<<(*i).salary;
        cout<<"\n "<<(*i).age;
    }
    

}