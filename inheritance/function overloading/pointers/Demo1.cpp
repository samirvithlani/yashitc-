#include<iostream>
using namespace std;



int main(){

    int x=10,y=20;
    int a[5]={10,20,30,40,50};
    int *p,*q,*aa[5]; 

    p = &x;
    q = &y;
    *p = *p + *q;

    aa = &a;

    cout<<"aa = "<<aa[0]<<endl;

    cout<<"\n "<<*p;

}