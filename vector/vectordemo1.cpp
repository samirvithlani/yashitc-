#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //for each loop
    for(int i:v){
        cout<<i<<" ";
    }

    for(auto i =v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }

    vector<int>::iterator it;

    for(it=v.begin();it!=v.end();it++){
        
        cout<<*it<<" ";
    }


    cout<<"\n"<<boolalpha<<v.empty();

    cout<<"\n"<<v.front();
    cout<<"\n"<<v.back();

    cout<<"\n 2 =>"<<v.at(2);

    //v.insert(v.end()-2,5,100);
    cout<<"\n after insert \n";

    //v.clear();
    v.erase(v.begin(),v.begin()+3);

    for(int i:v){
        cout<<i<<"\n";
    }
    

}