#include<iostream>
#include<string>
using namespace std;
class car{
    string brand;
    string model;
    float price;
public:
    car(){
        brand="unknown";
        model="unknown";
        price=0.0;
    }
    car(string b, string m){
        brand=b;
        model=m;
        price=0.0;
    }
    car(string b, string m, float p){
        brand=b;
        model=m;
        price=p;
    }
    void display(){
        cout<<"brand: "<<brand<<endl;
        cout<<"model: "<<model<<endl;
        cout<<"price: "<<price<<endl;
    }
};
int main(){
    car c1;
    c1.display();
    car c2("Toyota","swift");
    c2.display();
    car c3("Honda","Civic",25000.0);
    c3.display();
    return 0;
}