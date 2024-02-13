#include<iostream>
using namespace std;

int main()
{
    int a[5],b[5],i,j=0,k;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    cout<<"enter the number of steps to rotate an array:";
    cin>>k;
    k=k%5; // the array will repeat itself after 5 steps
    for(i=5-k;i<5;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<=k;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
}