#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    public:
    double balance;
    void set(double b){
        if (b>=0) balance=b;
        else balance=0;
    }
    void display(){
        cout<<"balance"<<balance<<endl;
    }
};
int main(){
    BankAccount s1;
    acc set(1000);
    acc display();
    return 0;

}
