#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int age;
    int marks;
public:
student(){
    name="Unknown";
    age=0;
    marks=0;
}
student(string n, int a, int m){
    name=n;
    age=a;
    marks=m;
}
void display(){
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Marks: "<<marks<<endl;
}
};
int main(){
    student s1;
    s1.display();
    student s2("John", 20, 85);
    s2.display();
    return 0;
}