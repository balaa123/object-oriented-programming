#include<iostream>
using namespace std;
class Fraction{
    int numerator;
    int denominator;
public:
    Fraction(){
        numerator=0;
        denominator=1;
    }
    Fraction(int num){
        numerator=num;
        denominator=1;
    }
    Fraction(int num, int denom){
        numerator=num;
        denominator=denom;
    }
    void display(){
        cout<<"Fraction: "<<numerator<<"/"<<denominator<<endl;
    }
};
int main(){
    Fraction f1;
    f1.display();
    Fraction f2(5);
    f2.display();
    Fraction f3(5,6);
    f3.display();
    return 0;
}