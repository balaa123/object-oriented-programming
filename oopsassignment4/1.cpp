#include<iostream>
#include<string>
using namespace std;
class rectangle {
    int length;
    int breadth;
public:
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void displayArea() {
        cout << "Area: " << length * breadth << endl;
    }
};
int main() {
    int l, b;
    cout << "Enter length and breadth of rectangle: "<<endl;
    cin >> l >> b;
    rectangle r(l, b);
    r.displayArea();
    return 0;
}