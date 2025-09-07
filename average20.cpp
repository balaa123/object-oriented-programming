#include <iostream>
using namespace std;

int main() {
    int x, count = 0;
    int sum = 0;
    cout << "Enter marks (-1 to end): ";
    while (cin >> x && x != -1) {
        sum += x;
        ++count;
    }
    if (count == 0) {
        cout << "No marks entered";
    } else {
        cout << (sum * 1.0 / count);
    }
    return 0;
}
