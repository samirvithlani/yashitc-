#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> addEmployees(){

    vector<string> employees;
    int no;
    cout<<"\n enter no of an employee";
    cin>>no;
    string name;

    for(int i=0;i<no;i++){

        cout<<"\n enter Name";
        _flushall();
        getline(cin,name);
        employees.push_back(name);
    }

    return employees;
}

void printEmployees(){

    vector<string> employees = addEmployees();

    for(string name:employees){
        cout<<name<<"\n";
    }
}


int main(){

    printEmployees();

}