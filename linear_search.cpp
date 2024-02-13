#include<iostream>
using namespace std;

int main()
{
    int a[5],i,x;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>a[i];
    }
    cout<<"enter a element to search:";
    cin>>x;

    int index=-1;
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            index=i;
            break;
        }
    }
    cout<<index;
}