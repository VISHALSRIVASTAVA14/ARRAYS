#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int a[n],i;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>a[i];
    }

    int l,u,c=0;
    cout<<"enter the lower limit(index value):";
    cin>>l;
    cout<<"enter the upper limit(index value):";
    cin>>u;
    for(i=l;i<=u;i++)
    {
        c=c+a[i];
    }
    cout<<"sum is:"<<c;
}