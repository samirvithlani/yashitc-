#include<iostream>
using namespace std;

int main(){


    string str = "royal technosoft";
    string str1  = "*pvt ltd";

   str.append(str1,0,3);
    cout<<"\n"<<str;

    //str.push_back(str1[0]);

    cout<<"\n"<<str1;
    cout<<"\n\n"<<str;

    

return 0;
}