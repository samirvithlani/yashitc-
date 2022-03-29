#include<iostream>

using namespace std;

//copy swap
int main(){

    string str1 = "royal";
    string str2 = "technosoft";

    char c[80]="";

    str1.copy(c,15,0);
    cout<<"\n"<<c;

    str2.swap(str1);

    cout<<"\n"<<str1;
    cout<<"\n"<<str2;

    return 0;
}