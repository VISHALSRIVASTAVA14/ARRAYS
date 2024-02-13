#include<iostream>
using namespace std;

int main()
{
    int a[5],i,x,y;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    cout<<"enter the element whose last occurence is to be found:";
    cin>>x;
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            y=i;
        }
    }
    cout<<"the index of last occurence of "<<x<<"is:"<<y;
}