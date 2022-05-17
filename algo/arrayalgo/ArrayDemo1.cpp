#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

    int a[] = {1,2,3,4,6,-6};
    int b[6];

    all_of(a,a+6,[](int x){return x>0;})? cout<<"\n all elements are positive" : cout<<"\n all elements are not positive";
    any_of(a,a+6,[](int x){return x<0;})? cout<<"\n any element is positive" : cout<<"\n any element is negative";
    none_of(a,a+6,[](int x){return x<0;})? cout<<"\n all elements are pos" : cout<<"\n any element is not negative";

    //for loop
    copy_n(a,6,b);

    for(int i=0;i<6;i++){
        cout<<"\n"<<b[i]<<" ";
    }
    //iota
    int x[5]={0};

    iota(x,x+5,100);

    for(int i=0;i<5;i++){
        cout<<"\n"<<x[i]<<" ";
    }
}

