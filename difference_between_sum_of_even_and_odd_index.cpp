#include<iostream>
using namespace std;

int main()
{
    int a[5],i,x=0,y=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        {
            x=x+a[i];
        }
        else
        {
            y=y+a[i];
        }
    }
    cout<<"the difference is:"<<x-y;
}