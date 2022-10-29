#include <iostream>
using namespace std;
void lower_sum(int row, int col, int a[3][3])
{
    int i,j,sum=0;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<=j)
            {
                sum+=a[i][i];
            }
        }
    }
    cout<<sum<<endl;
}
void upper_sum(int row, int col, int a[3][3])
{
    int i,j,sum=0;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>=j)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<sum<<endl;
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
    cout<<"Lower Triangular Matrix Sum:"<<endl;
    lower_sum(row,col,a); 
    cout<<"Upper Triangular Matrix Sum:"<<endl;
    upper_sum(row,col,a);
    return 0;   
}