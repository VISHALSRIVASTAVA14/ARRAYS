#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array:";
    cin>>n;

    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number (the number can be either 0 or 1):";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int c=a[i];
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    cout<<"sorted array is:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}