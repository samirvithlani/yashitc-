#include<iostream>
using namespace std;
// auto sum(){

//     cout<<"\n sum called...";
// }
// auto sum(int n){
// }

int main(){

    auto sum =[](){
        cout<<"\n sum called...";
    };
    sum();

    auto sub = [](int n){
        cout<<"\n sub called..."<<n;
    };
    sub(10);

    auto mul = [](int n){

        return n * n;
    };
    cout<<"\n"<<mul(10);
    

}