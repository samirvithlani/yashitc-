#include<iostream>
using namespace std;
class Box2;
class Box{

public:
    int len;
    Box(){
        len = 0;
    }

    friend int printLen(Box,Box2);
};
class Box2{

    public:
    int a;
    friend int printLen(Box, Box2);
};

int printLen(Box b,Box2 b2){
    
    b.len = 100;
    b2.a = 200;
    return b.len + b2.a;
}
int main(){


    Box b;
    Box2 b2;
    cout<<printLen(b,b2);

}