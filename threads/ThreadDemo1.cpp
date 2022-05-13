#include<iostream>
#include<string>
#include<thread>
using namespace std;

void func_dummy(int n){

    for(int i=0;i<n;i++){

        cout<<"Thread 1 :: Callabe=>function"<<endl;
    }

}

void demo1(){
    
    cout<<"thread 2::calling...";
}

// class thread_obj{

//         public:

//         void operator()(int n){

//             for(int i =0;i<n;i++){

//                 cout<<"Thread 2 :: Callable=>class"<<endl;
//             }
//         }


// };

int main(){


    cout<<"\n main called...";
    std::thread t1(func_dummy,2);
    t1.join();
    std::thread t2(demo1);

    

}