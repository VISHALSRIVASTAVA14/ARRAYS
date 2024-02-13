#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>a[i];
        a[i]=a[i]*a[i];
    }

    for(i=0;i<n;i++)
    {
        int c=a[i];
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}