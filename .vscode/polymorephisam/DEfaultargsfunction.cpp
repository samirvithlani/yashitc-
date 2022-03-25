#include<iostream>
using namespace std;

int sum(int a=0, int b=0,int c=0,float d =0){

    return a+b+c+d;
}
int main(){

    int a = 10;
    int b = 20;
    cout<<sum(a,b,30,40.5);

}