#include<iostream>
#include<string>
using namespace std;
class employee{
    int id;
    string name;
    float salary;
public:
    employee(){
        id=0;
        name="unknown";
        salary=0.0;
    }
    employee(int i, string n){
        id=i;
        name=n;
        salary=0.0;
    }
    employee(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    employee e1;
    e1.display();
    employee e2(101,"balaa");
    e2.display();
    employee e3(102,"balaa",60000.0);
    e3.display();
    return 0;
}