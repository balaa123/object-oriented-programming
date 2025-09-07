#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    double length;
    double width;
public:
    void set(double l, double w) {
        length = l;
        width = w;
    }
    void display() {
        cout << "Width: " << width << endl;
        cout << "Length: " << length << endl;
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Rectangle s1;
    s1.set(5, 5);
    s1.display();
    return 0;
}
