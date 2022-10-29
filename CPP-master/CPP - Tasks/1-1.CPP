#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two values to swap: ";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swap: "<<a<<" "<<b;
    return 0;
}