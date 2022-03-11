#include<iostream>

using namespace std;

int main(){

    int a=10,ans=0,ans1=0;
    //++a ,a++
    //++a is pre incrment
    //a++ is post increment
    //--a ,a++

    //post
                //11 + 12 + 12 = 35
          ans = ++a + a++ + a++;
          ans1= a + a++ + ++a; //13 + 13 + 14  =27+14 a = 14  41
    //a =12
    //ans = 33

    cout<<"\n a ="<<a;
    cout<<"\n ans ="<<ans;
    cout<<"\n ans ="<<ans1;


}
