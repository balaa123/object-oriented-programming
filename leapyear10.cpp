#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Enter a year: ";
    cin >> y;
    if ((y % 4 == 0)) {
        cout << "Leap Year";
    } else {
        cout << "Not a Leap Year";
    }
    return 0;
}
