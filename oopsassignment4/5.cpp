#include<iostream>
using namespace std;
class time{
    int hours;
    int minutes;
    int seconds;
public:
    time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    time(int h , int m){
        hours =h;
        minutes = m;
        seconds=0;
    } 
    time(int h, int m, int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
    void display(){
        cout<<"Time: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};
int main(){
    time t1;
    t1.display();
    time t2(5,30);
    t2.display();
    time t3(3,45,20);
    t3.display();
    return 0;
}
