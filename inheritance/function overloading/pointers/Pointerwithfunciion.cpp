#include <iostream>

using namespace std;

class Points
{

public:
    void swap(int a, int b)
    {

        cout << "\n value of a in before swap function = " << a;
        cout << "\n value of b in before swap function = " << b;
        cout << "\n add of a in after before  swap function = " << &a;
        cout << "\n add of b in before swap function = " << &b;
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "\n value of a in after swap function = " << a;
        cout << "\n value of b in after swap function = " << b;
        cout << "\n add of a in after swap function = " << &a;
        cout << "\n add of b in after swap function = " << &b;
    }
};

int main()
{

    Points p;
    int a = 10, b = 20;

    cout << "\n value of a in main function = " << a;
    cout << "\n value of b in main function = " << b;
    cout << "\n add of a in main function = " << &a;
    cout << "\n add of b in main function = " << &b;

    p.swap(a, b);

    cout << "\n value of a in main function  after swap = " << a;
    cout << "\n value of b in main function after swap  = " << b;
    cout << "\n add of a in main function after swap  = " << &a;
    cout << "\n add of b in main function after swap  = " << &b;
}