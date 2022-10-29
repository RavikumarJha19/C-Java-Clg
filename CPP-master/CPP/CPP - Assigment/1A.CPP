#include <iostream>
using namespace std;
void lower(int row, int col, int a[3][3])
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
void upper(int row, int col, int a[3][3])
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>j)
            {
                cout<<"0"<<" ";
            }
            else
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int a[3][3],row=3,col=3;
    int i,j;
    cout<<"Enter your 3x3 matrix"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Lower Triangular Matrix:"<<endl;
    lower(row,col,a); 
    cout<<"Upper Triangular Matrix:"<<endl;
    upper(row,col,a);
    return 0;   
}
