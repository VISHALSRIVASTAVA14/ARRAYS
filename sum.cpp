#include<iostream>
using namespace std;

int main()
{
    int a[5],i=0,sum=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a value:";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of the element is:"<<sum;
}