#include <iostream>
using namespace std;

class Temperature {
public:
    double celsius;

    void set(double c) {
        celsius = c;
    }
    void display() {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << (celsius * 9.0 / 5.0) + 32 << endl;
    }
};

int main() {
    Temperature t1;
    t1.set(37);
    t1.display();
    return 0;
}
