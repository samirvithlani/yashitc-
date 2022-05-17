#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a[] = {1,5,8,9,7,12,3,45,0};

    int asize = sizeof(a)/sizeof(a[0]);
    cout<<"\n size of an array = "<<asize;

    for(int i=0;i<asize;i++){
        cout<<"\n"<<a[i]<<" ";
    }    


    sort(a,a+asize);

    cout<<"\n\n sorted array is ";
    for(int i=0;i<asize;i++){
        cout<<"\n"<<a[i]<<" ";
    }

    cout<<"\n Max element from array is = "<<*max_element(a,a+asize);



}