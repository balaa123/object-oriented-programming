#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int first=0,second=1,next;
    for(int i=0;i<=n;i++)
    {
        next=first+second;
        first=second;
        second=next;
        
    }
    cout<<endl;
    return 0;
}