#include <iostream> 
using namespace std; 
class Rectangle 
{
   public:
     int l,b;
   void getdata()
   {
     cout<<"Enter length and breadth= "; 
     cin>>l>>b;
   }
 };
class Triangle : public Rectangle 
{
   private:
    int ba,h;
   public:
   void readdata()
   {
     cout << "\nEnter base and height= "; 
     cin>>ba>>h;
   }
   void product()
   {
     cout<<"Area of Rectangle= "<<l*b;
     cout<<"\nArea of Triangle= "<<(ba*h)/2;
   }
 };
 
 int main()
 {
    Triangle a;     
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }