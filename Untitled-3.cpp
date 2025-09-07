#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cout << "Enter the number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit; 
        n /= 10;                      
    }

    if (reversed == original) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}
