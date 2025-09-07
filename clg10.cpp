#include <iostream>
#include <string>
using namespace std;

class University {
public:
    string name;
    int ranking;

    void set(string n, int r) {
        name = n;
        ranking = r;
    }
    void display() {
        cout << "University: " << name << endl;
        cout << "Ranking: " << ranking << endl;
    }
};

int main() {
    University u1;
    u1.set("Sai University", 1);
    u1.display();
    return 0;
}
