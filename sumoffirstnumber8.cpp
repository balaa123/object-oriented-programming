#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int temp = 0;
    for (int i = 1; i <= n; ++i) {
        temp += i;
    }
    cout << "The sum of the positive integers is: " << temp << endl;
    return 0;
}
