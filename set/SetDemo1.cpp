#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){

    set<string> s;
    s.insert("java");
    s.insert("c++");
    s.insert("c");
    s.insert("python");
    s.insert("Python");
    s.insert("node");


    for(auto it = s.begin(); it != s.end(); it++){
        cout<<"\n"<<*it<<" ";
    }
    //cout<<boolalpha<<"\n"<<s.erase("java");
    
/*/
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<"\n"<<*it<<" ";
    }
    */

    auto pos = s.find("c");
    //cout<<"\n position = >"<<*pos;

   int count = 0;
    
   for(auto i =pos;i!= s.end();i++){
       count++;
       cout<<"\n "<<*i;
   }

   
   count =  s.size()-count;
   cout<<"\n count = "<<count;
   

//    for(auto i  = s.begin();i != s.end();i++){
//        auto pos1 = s.find("node");
//        if(*pos1 == 0){
//            count++;
//        }
//        cout<<"\n"<<count;

//    }

//     cout<<"\n"<<count;
//    cout<<"\n count = "<<count;

}