#include <thread>
#include <iostream>
using namespace std;

// create thread using function....

void thread_function()
{

    cout << "Hello from thread" << endl;
}
void thread_function2(){

    cout << "Hello from thread2" << endl;
}

int main()
{

    // thread class's object is created using thread function
    // called thread class parameterized constructor

    cout << "\n main called..1";

    thread t1(&thread_function);
    

    if (t1.joinable())
    {
        cout << "\n inside if";
        t1.join();
    }
    thread t2(&thread_function2);
    t2.join();

    //thread t2(&thread_function);
    //t2.join();

    // wait for thread to finish
}
