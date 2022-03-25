#include<iostream>
using namespace std;
class Search{

    public:
    void order(int amount){

        cout<<"Ordering "<<amount<<" items"<<endl;
    }
    void order(int amount,bool is_urgent){

        cout<<"Ordering "<<amount<<" items"<<endl;
        if(is_urgent){
            cout<<"Urgent order"<<endl;
    
            }
 }
    void order(){

        cout<<"Ordering"<<endl;
    }
    void order(string name,int amount){

        cout<<"Ordering "<<amount<<" items for "<<name<<endl;
    }
};
int main(){

    Search s;
    s.order(10);
    s.order(10,true);
    s.order();
    s.order("John",10);

}