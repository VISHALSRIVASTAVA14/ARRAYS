#include<iostream>
using namespace std;

int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    bool x=false;
    for(i=0;i<5;i++)
    {
        if(a[i]<a[i+1])
        {
            x=true;
        }
        else
        {
            x=false;
            break;
        }
    }
    if(x==true)
    {
        cout<<"the array is sorted";
    }
    else
    {
        cout<<"the array is not sorted";
    }
}