#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number";
    cin>>n;
    do{
        int digit = n %10;
        sum= sum*10 +digit;
        n=n/10;
    }  
    while(n!=0);
    cout<<sum;
    return 0;
}