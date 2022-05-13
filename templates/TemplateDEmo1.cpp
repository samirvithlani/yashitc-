
// 2 type of template :
// 1. template class
// 2. template function
#include<iostream>
using namespace std;

template<typename T,typename S> void push_back(T a, S b){

    cout<<"push_back  "<<a<<endl;


}

template <typename T>void pop_back(T a){

    cout<<"pop_back  "<<a<<endl;

}

void demo(auto a){

    cout<<"demo  "<<a<<endl;

}

int main(){

        push_back(10,'x');
        pop_back("sam");
        
}