#include <iostream>
using namespace std;
float volume;
void vol(int s)
{
    volume=s*s*s;
    cout<<"Volume of cube is:"<<volume<<endl;
}
void vol(float w,float h,float l)
{
    volume=w*h*l;
    cout<<"Volume of cuboid is:"<<volume<<endl;
}
void vol(float r,float he)
{
    volume=3.14*(r*r)*he;
    cout<<"Volume of cylinder is:"<<volume<<endl;
}
int main()
{
    float s,w,h,l,r,he;
    cout<<"Enter side of cube:";
    cin>>s;
    cout<<"Enter width, height and length of cuboid:";
    cin>>w>>h>>l;
    cout<<"Enter radius and height of cylinder:";
    cin>>r>>he;
    cout<<endl;
    vol(s);
    vol(w,h,l);
    vol(r,he);
    return 0;
}

