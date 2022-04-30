//WITH LIFO , elemetns are added at the top and removed from the top

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){


    stack<string> products;
    products.push("Laptop");
    products.push("Mobile");
    products.push("TV");
    products.push("Fridge");
    products.push("Washing Machine");
    products.push("AC");
    products.push("Refrigerator");
    cout<<products.size();

    while(!products.empty()){
        cout<<products.top()<<endl;
        products.pop();
        
    }
    


}


