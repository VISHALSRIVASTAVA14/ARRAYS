#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the range of array:";
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>a[i];
    }

    int m;
    cout<<"enter the number of elements to be searched in array:";
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>b[i];
    }

    int j;
    for(i=0;i<m;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }
        }
        if(c>=1)
        {
            cout<<b[i]<<" is present in the array"<<endl;;
        }
        else
        {
            cout<<b[i]<<" is not present in the array"<<endl;
        }
    }
}