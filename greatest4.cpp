#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: "<<endl;
    cin >> a >> b >> c;
    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }
    cout << "The greatest integer is: " << a;
    return 0;
}
