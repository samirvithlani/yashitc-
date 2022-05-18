#include<iostream>
#include<string>
using namespace std;


class Employee{

    private:
    int emp;
    string name;

    public:
    void setEmp(int emp){
        this->emp = emp;
    }

    int getEmp(){
        return this->emp;
    }

    void setName(string name){
        this->name = name;
    }
    string getName(){

        return this->name;
    }
};


int main(){


    Employee e;
    e.setEmp(1500);
    cout<<e.getEmp();

}