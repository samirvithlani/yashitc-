#include <iostream>
using namespace std;

class Parent
{

public:

    Parent(){
        cout<<"Parent default constructor called"<<endl;
    }
    Parent(int p)
    {
        
        cout << "Parent constructor called" << endl;
    }
   
};
class Child : public Parent
{

public:
    Child():Parent(2500)
    {
        cout << "Child constructor" << endl;
    }
};

int main()
{
    Child c;
    return 0;
}