#include<iostream>
#iinclude<string>
using namespace std;
class book{
    string title;
    string author;
    float price;
public:
    book(){
        title="unknown";
        author="unknown";
        price=0.0;
    }
    book(string t, string a){
        title =t;
        author = a;
        price=0.0;
    }
    book(string t, string a, float p){
        title=t;
        author=a;
        price=p;
    }
    void display(){
        cout<<"title: "<<title<<endl;
        cout<<"author: "<<author<<endl;
        cout<<"price: "<<price<<endl;
    }
};
int main(){
    book b1;
    b1.display();
    book b2("a","balaa");
    b2.display();
    book b3("c","balaa",100.0);
    b3.display();
    return 0;
}