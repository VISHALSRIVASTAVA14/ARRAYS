#include<iostream>
using namespace std;

int main()
{
    int a[5],i,j;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        int c=0;
        for(j=0;j<5;j++)
        {
            if(a[i]==a[j])
            {
                c=c+1;
            }
        }
        if(c==1)
        {
            cout<<a[i]<<" is unique";
        }
    }
}