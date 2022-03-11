#include<iostream>

using namespace std;

int main(){

    // Array is an group of similar kind of data...float
    //0 to n
    float s_marks[10],sum = 0;
    for(int i=0;i<3;i++){
        cout<<"\n enter "<<i + 1<<" student marks";
        cin>>s_marks[i];

        sum = sum +s_marks[i];
    }

    for(int i=0;i<3;i++){

        cout<<"\n marks of" <<i + 1<<" student is"<<s_marks[i];
    }

    cout<<"\n totla marks of class  ="<<sum;



}
