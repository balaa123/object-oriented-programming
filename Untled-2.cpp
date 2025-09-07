#include <iostream>
#include <string>
using namespace std;

class Details {
private:
    int roll_no;
    float marks;
    string name;
    string state;
    string city;

public:
    void set(string n, string c, string s, int r, float m) {
        name = n;
        city = c;
        state = s;
        roll_no = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "State: " << state << endl;
        cout << "City: " << city << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Details d1;
    d1.set("was", "city1", "state1", 89, 55.5f);
    d1.display();
    return 0;
}
