#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_front(6);

    dq.pop_back();
    //dq.insert(dq.end(), 7);
    dq.insert(dq.begin()+0,10,12);

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

  
}