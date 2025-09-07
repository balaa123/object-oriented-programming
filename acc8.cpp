#include <iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    double balance;

    void set(int num, double bal) {
        accountNumber = num;
        balance = bal;
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account acc1;
    acc1.set(12345, 5000.75);
    acc1.display();
    return 0;
}
