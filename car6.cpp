#include <iostream>
#include <string>
using namespace std;

class student{
    string brand,model;
public:
    void set(string b , string m){
        brand =b;
        model =m;
    }
    void display(){
        cout<<"brand"<<brand<<"model"<<model<<endl;
    }
};
int main(){
    student s1;
    s1.set("absk","snadj");
    s1.display();
    return 0;
}