#include <iostream>
using namespace std;

class Parent
{

public:
int x;
    Parent()
    {
        x=100;
        cout << "Parent constructor called" << endl;
    }
};
class Child : public Parent
{

public:
    Child()
    {
        cout << "Child constructor" << endl;
    }
};

int main()
{
    Child c;
    return 0;
}