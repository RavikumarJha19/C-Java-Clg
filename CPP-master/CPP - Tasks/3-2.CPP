#include <iostream>

using namespace std;
class Time
{
public:
int hour,minute,second;
public:
friend istream &operator>>(istream &scan,Time &t)
{
scan>>t.hour>>t.minute>>t.second;
return scan;
}
friend ostream &operator<<(ostream &print,Time &t)
{
print<<t.hour<<":"<<t.minute<<":"<<t.second;
return print;
}
void operator==(Time z)
{
if(hour==z.hour&&minute==z.minute&&second==z.second)
{
cout<<"\nBoth the time are same: ";
}
else
{
cout<<"\nTime are not same: ";
}
}
};
int main()
{
Time t1,t2;

cout<<"\nEnter the Time 1st: HOUR MINUTE SECOND \n";
cin>>t1;
cout<<"\nTIME: ";
cout<<t1;
cout<<"\nEnter the Time 2nd: HOUR MINUTE SECOND \n";
cin>>t2;
cout<<"\nTIME: ";
cout<<t2;
t1==t2;
return 0;
}