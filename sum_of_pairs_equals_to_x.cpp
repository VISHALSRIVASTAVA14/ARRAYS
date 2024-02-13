#include<iostream>
using namespace std;

int main()
{
    int a[5],i,j,x,y=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    cout<<"enter the sum whose pairs to be found:";
    cin>>x;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==a[j])
            {
                continue;
            }
            else
            {
                if((a[i]+a[j])==x)
                {
                    y=y+1;
                }
            }
        }
    }
    cout<<"the number of pairs whose sum is equals to "<<x<<" is:"<<y;
}