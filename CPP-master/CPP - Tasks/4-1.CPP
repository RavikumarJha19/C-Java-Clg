#include<iostream>
#include<cstdlib>
using namespace std;

class Fractions
{
    public:
    int num,den;
    Fractions()
    {
        num=1;
        den=1;
    }
    Fractions(int n,int d)
    {
        num=n;
        if(d==0)
        {
            cout<<"Denominator cannot be zero!"<<endl;
            exit(0);
        }
        else
        {
            den=d;
        }
    }
    Fractions operator+(Fractions f)
    {
        int n = num*f.den+f.num*den;
        int d = den*f.den;
        return Fractions(n/gcd(n,d),d/gcd(n,d));
    }
    Fractions operator-(Fractions f)
    {
        int n = num*f.den-f.num*den;
        int d = den*f.den;
        return Fractions(n/gcd(n,d),d/gcd(n,d));
    }
    Fractions operator*(Fractions f)
    {
        int n = num*f.num;
        int d = den*f.den;
        return Fractions(n/gcd(n,d),d/gcd(n,d));
    }
    Fractions operator/(Fractions f)
    {
        int n = num*f.num;
        int d = den*f.den;
        return Fractions(n/gcd(n,d),d/gcd(n,d));
    }
    bool operator==(Fractions &f)
    {
        return (num==f.num) && (den==f.den);
    }
    int gcd(int n, int d)
    {
        int rem;
        while (d != 0)
        {
            rem = n % d;
            n = d;
            d = rem;
        }
        return n;
    }
    void accept()
    {
        cout<<"\n Enter Numerator     :  ";
        cin>>num;
        cout<<"\n Enter Denominator   :  ";
        cin>>den;
    }
};
int main()
{
    Fractions f1;
    Fractions f2;
    Fractions f3;
    
    cout<<"\n Enter 1st Fraction Value ";

    f1.accept();
    
    cout<<"\n Enter 2nd Fraction Value ";

    f2.accept();

    f3=f1+f2;

    cout<<"\n Sum of Two Numbers        : "<<f3.num<<"/"<<f3.den<<endl;
    
    f3=f1-f2;
    cout<<"\n Difference of Two Numbers : "<<f3.num<<"/"<<f3.den<<endl;

    f3=f1*f2;
    cout<<"\n Product of Two Numbers    : "<<f3.num<<"/"<<f3.den<<endl;

    f3=f1/f2;
    cout<<"\n Division of Two Numbers   : "<<f3.num<<"/"<<f3.den;

    
    if(f1 == f2)
    {
        cout<<"\n Fraction 1 is Equal to Fraction 2"<<endl;
    }
    else
    {
        cout<<"\n Fraction 1 is Not Equal to Fraction 2"<<endl;
    }
    return 0;
}