#include<iostream>
using namespace std;

int main()
{
    int a[5],i,max,max2;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max2=a[i-1];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==max)
        {
            continue;
        }
        else
        {
            if(a[i]>max2)
            {
                max2=a[i];
            }
        }
    }
    cout<<"the second largest number is:"<<max2;
}