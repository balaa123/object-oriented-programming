#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1, i = 2;
    while (i <= n) {
        fact *= i;
        ++i;
    }
    cout << fact;
    return 0;
}
