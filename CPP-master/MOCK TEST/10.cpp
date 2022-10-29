#include <iostream>
using namespace std;
class Cube
{
    public:
    int s;
    void get_data()
    {
        cout<<"Enter side of cube= ";
        cin>>s;
    }
};
class Shape:public Cube
{
    public:
    void product()
    {
        cout<<"The cube is:"<<s*s*s;
    }
};
int main()
{
    Shape p;
    p.get_data();
    p.product();
    return 0;
}