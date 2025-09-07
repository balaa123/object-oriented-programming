#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter numbers (negative to stop): ";
    do {
        cin >> x;
    } while (x >= 0);
    cout << "Stopped";
    return 0;
}
