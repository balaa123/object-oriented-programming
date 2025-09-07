#include<iostream>
#include<string>
using namespace std;
class bankaccount{  
    int accountnumber;
    float balance;
public:
    bankaccount(){
        accountnumber=0;
        balance=0.0;
    }
    bankaccount(int accnum){
        accountnumber=accnum;
        balance=0.0;
    }
    bankaccount(int accnum, float bal){
        accountnumber=accnum;
        balance=bal;
    }
    void display(){
        cout<<"Account Number: "<<accountnumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    bankaccount b1;
    b1.display();
    bankaccount b2(12345);
    b2.display();
    bankaccount b3(67890, 1000.0);
    b3.display();
    return 0;
}