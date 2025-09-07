#include <iostream>
#include <cstring>
using namespace std;
class Details {
    private:
    int roll_no;
    float marks;
    string name;

    public:
    void setName(string n) {
        name = n;
    }
    void setMarks(float m) {
        marks = m;
    }
    void setRollNo(int r) {
        roll_no = r;
    }
    string getName() const {
        return name;
    }
    float getMarks() const {
        return marks;
    }
    int getRollNo() const {
        return roll_no;
    }
};
int main() {
    Details d1;
    d1.name = "was";
    d1.marks = 55.5;
    d1.roll_no = 89;
    cout<<"name : "<<d1.name<<endl<<"marks : "<<d1.marks<<endl<<"roll_no : "<<d1.roll_no<<endl;
    return 0;
}   