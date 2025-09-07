#include<iostream>
using namespace std;
int main(){
    int n , n1 ;
    int temp;
    cout<<"enter number 1"<<endl;
    cin>>n;
    cout<<"enter number 2"<<endl;
    cin>>n1;
    while (n1!=0){
        temp = n1;
        n1 = n%n1;
        n=temp;
    }
    cout<< temp ;
    return 0;
    
}