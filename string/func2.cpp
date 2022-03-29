#include<iostream>
using namespace std;

int main(){

    string str = "royal technosoft";
    string str1  = "*pvt ltd";

    //push_back --> append

    str.insert(6,str1,0,3);
    cout<<"\n"<<str;


    //reverse(str.begin(),str.end());
    reverse(str.begin(),str.end());

    cout<<"\n reverse = "<<str;
    

}