#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a,b;
    int i,x,k;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>x;
        a.push_back(x);
    }
    cout<<"enter the number of steps to be rotated:";
    cin>>k;
    k=k%a.size(); //the vector will be same after 5 steps
    for(i=a.size()-k;i<a.size();i++)
    {
        b.push_back(a[i]);
    }
    for(i=0;i<=k;i++)
    {
        b.push_back(a[i]);
    }
    for(i=0;i<a.size();i++)
    {
        cout<<b[i]<<" ";
    }
}