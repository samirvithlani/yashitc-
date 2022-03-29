#include<iostream>
using namespace std;

//begin end rebegin rend
int main(){


    string str = "royal technosoft";

    std::string::iterator itr;
    std::string::reverse_iterator ritr;

    for(itr = str.begin(); itr != str.end(); itr++){
        cout<<*itr;
    }
    cout<<"\n\n\n";

    for(ritr = str.rbegin(); ritr != str.rend(); ritr++){
        cout<<*ritr;
    }


}
