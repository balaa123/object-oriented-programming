#include <iostream>
#include <string>
using namespace std;

class student {
    int age;
    string name;
public:
    void set(int a, string n) {
        age = a;
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    student S1;
    S1.set(45, "balaaa");
    S1.display();
    return 0;
}
