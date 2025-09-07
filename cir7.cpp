#include <iostream>
#include <string>
using namespace std;

class circle{
    double radius ;
    
public:
    void set(double r) {
        radius = r;
    }
    void display() {
        cout << "raidus: " << radius << endl;
        cout << "Area of Rectangle: " << 2 *radius * 3.14159 << endl;
    }
};
int main(){
    circle s1;
    s1.set(5);
    s1.display();
    return 0;
}