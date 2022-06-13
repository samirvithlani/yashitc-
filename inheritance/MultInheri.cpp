#include<iostream>
#include<string>

using namespace std;
class Person{

    public:
    int x;
    void setX(int i){
        x = i;
    }
    Person(){
        cout<<"Person constructor"<<endl;
    }
};
class Faculty : virtual public Person{
    public: 
    Faculty(){
        cout<<"Faculty constructor"<<endl;
    }
};

class Student: virtual public Person{
    
    public:
    Student(){
        cout<<"Student constructor"<<endl;
    }
};

class TA : public Faculty, public Student{
    public:
    TA(){
        cout<<"TA constructor"<<endl;
    }
};


int main(){


    TA ta1;  
    ta1.setX(10); //error ambiguous //
}