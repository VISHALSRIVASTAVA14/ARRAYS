#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>a[i];
    }
    bool x=false;
    for(i=0;i<n;i++)
    {
        int d=0;
        for(j=i+1;j<n;j++)
        {
            d=d+a[j];
        }
        c=c+a[i];
        if(c==d)
        {
            cout<<"the array can be partitioned";
            x=true;
        }
    }
    if(x==false)
    {
        cout<<"the array cannot be partitioned";
    }
}