#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

class Proj{

    public:
    int salary;
};

//predicate function
bool compare(const Proj&p1,const Proj&p2){

    return p1.salary>p2.salary;
}

int main(){


        Proj p1;
        p1.salary = 1500;
        Proj p2;
        p2.salary = 2200;
        Proj p3;
        p3.salary = 5000;
        vector<Proj> v;

        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);


        for(auto i=0;i<v.size();i++){
            cout<<"\n"<<v[i].salary<<" ";
        }

        
        //max salry from vector
        
        auto it = max_element(v.begin(),v.end(),[](const Proj &x,const Proj &y){return x.salary<y.salary;});
        auto it = min_element(v.begin(),v.end(),compare);
        cout<<"\n Max salary from vector is = "<<it->salary;

}
