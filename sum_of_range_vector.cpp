#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    vector<int> a;
    int i,x;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>x;
        a.push_back(x);
    }

    int l,u,c=0;
    cout<<"enter the lower limit:";
    cin>>l;
    cout<<"enter the upper limit:";
    cin>>u;
    for(i=l-1;i<=u-1;i++)
    {
        c=c+a[i];
    }
    cout<<"sum is:"<<c;
}