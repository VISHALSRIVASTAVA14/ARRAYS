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
    }

    for(i=0;i<n;i++)
    {
        int c=a[i];
        for(j=0;j<n;j++)
        {
            if((a[i]%2==0) && (a[j]%2==1))
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