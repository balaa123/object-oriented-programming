#include <iostream>
#include <string>
using namespace std;

class book {
    string title;
    double price;
public:
    void set(string t,double p){
        title= t;
        price = p;
    }
    void display (){
        cout << "price: " << price << endl;
        cout << "title " << title << endl;
    }

};
int main (){
    book s1;
    s1.set("book",40);
    s1.display();
    return 0;
}