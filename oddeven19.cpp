#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; ++i)
        cout << i << (i % 2 == 0 ? " Even\n" : " Odd\n");
        return 0;
}
