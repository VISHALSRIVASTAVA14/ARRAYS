#include<iostream>
using namespace std;

int main()
{
    int a[5],i,j,k,x,y=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    cout<<"enter the sum whose triplet is to be found:";
    cin>>x;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            for(k=j+1;k<5;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    y++;
                }
            }
        }
    }
    cout<<"the number of triplets whose sum is equals to "<<x<<" is:"<<y;
}