#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){


    list<int> list1;
    for(int i=0;i<=4;i++){

        list1.push_back(i*2);
    }


    list<int> :: iterator it;

    for(it = list1.begin();it!= list1.end();it++){

        cout<<*it<<endl;
    }

    cout<<list1.front();
    cout<<list1.back();

    it = list1.begin(); //it points to the first element of the list
    advance(it,2); //it points to the third element of the list
    cout<<"third element"<<*it;


    //
    list1.pop_front();
    cout<<"\nfront after pop"<<list1.front()<<endl;
    //pop_back()

    advance(it,0);
    list1.insert(it,1,500);

    for(it = list1.begin();it!= list1.end();it++){

        cout<<*it<<endl;
    }

    //fornt back

    list1.remove(500);
    cout<<"\n after removing...."<<endl;

    for(it = list1.begin();it!= list1.end();it++){

        cout<<*it<<endl;
    }
}

