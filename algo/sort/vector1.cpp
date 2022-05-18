#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(55);
    v.push_back(8);
    v.push_back(9);
    v.push_back(7);
    v.push_back(12);
    v.push_back(12);
    v.push_back(12);
    v.push_back(3);
    v.push_back(45);
    v.push_back(0);

    ///sort(v.begin(),v.end());

    for(auto i=0;i<v.size();i++){
        cout<<"\n"<<v[i]<<" ";
    }

    cout<<"\n Max element from vector is = "<<*max_element(v.begin(),v.end());
    cout<<"\n Min element from vector is = "<<*min_element(v.begin(),v.end());
    cout<<"\n sum of vector  = "<<accumulate(v.begin(),v.end(),0);

    //reverse(v.begin(),v.end());

    cout<<"\n vector after reverse is ";
    for(auto i=0;i<v.size();i++){
        cout<<"\n"<<v[i]<<" ";
    }


    find(v.begin(),v.end(),55) != v.end() ? cout<<"\n 45 is present in vector" : cout<<"\n 45 is not present in vector";


    cout<<"\n count of element in vector = "<<count(v.begin(),v.begin()+4,12);

    v.erase(unique(v.begin(),v.end v.end());

    cout<<"\n after removing duplicate elements...";
    for(auto i=0;i<v.size();i++){
        cout<<"\n"<<v[i]<<" ";
    }

    cout<<"\n max distance =>"<<distance(v.begin(),max_element(v.begin(),v.end()));

}