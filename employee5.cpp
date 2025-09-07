#include <iostream>
#include <string>
using namespace std;
class employee{
    double id;
    string name;
public:
    void set(double i, string n){
        id=i;
        name=n;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;

    }
};
int main(){
    employee s1;
    s1.set(57,"balaa");
    s1.display();
    return 0;
}

