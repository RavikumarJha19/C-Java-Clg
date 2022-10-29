#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex();
    Complex(int, int);
    void display();
    Complex operator+(Complex &);
};
Complex::Complex()
{
    real=0;
    img=0;
}
Complex::Complex(int r,int i)
{
    real=r;
    img=i;

}
Complex Complex::operator+(Complex &c)
{
    Complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}
void Complex::display()
{
    char ch;
    if(img>=0)
    {
        ch='+';
    }
    else
    {
        ch='-';
    }
    cout<<real<<ch<<abs(img)<<"i"<<endl;
}
int main()
{
    int r1,i1,r2,i2;
    cout<<"This program does Addition of two complex numbers"<<endl;
    cout<<"1st:"<<endl;
    cout<<"Enter Real and Imaginary Parts:";
    cin>>r1>>i1;
    cout<<"\n2nd:"<<endl;
    cout<<"Enter Real and Imaginary Parts:";
    cin>>r2>>i2;
    Complex c1(r1,i1);
    Complex c2(r2,i2);
    Complex c3;
    c3=c1+c2;
    c3.display();
}