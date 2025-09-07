#include<iostream>
using namespace std;
class complex {
    int real;
    int imag;
public:
    complex( ){
        real = 0 ;
        imag = 0;
    }
    complex(int r=0){
        real=r;
        imag=0;
    }
    complex(int r, int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<"Real: "<<real<<endl<<"Imaginary: "<<imag<<endl;
    }


};
int main(){
    complex s1;
    s1.display();
    complex s2(5);
    s2.display();
    complex s3(3,4);
    s3.display();
    return 0;
}