#include <iostream>
using namespace std;

int main() {
    int p, r, t;
    cout << "Enter principal: ";
    cin >> p;

    cout << "Enter time (in years): ";
    cin >> t;

    cout << "Enter rate of interest: ";
    cin >> r;


    cout << "Simple Interest = " << (r*p*t)/100<< endl;

    return 0;
}
