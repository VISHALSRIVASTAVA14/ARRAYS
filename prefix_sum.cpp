#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array:";
    cin>>n;

    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        a[i]=a[i]+c;
        c=a[i];  
    }

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}