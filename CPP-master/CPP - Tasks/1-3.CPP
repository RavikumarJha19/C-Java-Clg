#include<iostream>
using namespace std;
int main()
{
    int i,j,k,arr[20],n,temp;
    cout<<"Enter no. of elements: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<"Sorted Array: ";
    for(k=0;k<n;k++)
    {
        cout<<"\t"<<arr[k];
    }
    return 0;
}