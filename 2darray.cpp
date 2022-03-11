#include<iostream>

using namespace std;

int main(){


    int a[3][3],sum=0;

    for(int i =0;i<=2;i++){

        for(int j=0;j<=2;j++){

            cout<<"enter no";
            cin>>a[i][j];
        }
    }

    for(int i =0;i<=2;i++){

        sum=0;
        for(int j=0;j<=2;j++){

            cout<<"\t"<<a[i][j];
            sum = sum + a[i][j];

        }
        cout<<"\t sum ="<<sum;
        cout<<"\n";
    }

}
