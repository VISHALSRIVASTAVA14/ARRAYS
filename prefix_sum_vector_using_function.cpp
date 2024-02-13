#include<iostream>
#include<vector>
using namespace std;

void prefix_sum(vector<int> &a)
{
    int j,c=0;
    for(j=0;j<a.size();j++)
    {
        a[j]=a[j]+c;
        c=a[j];
    }
    cout<<"prefix sum is:";
    for(j=0;j<a.size();j++)
    {
        cout<<a[j]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter the size of an array:";
    cin>>n;

    vector<int> a;
    int i,x;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" number:";
        cin>>x;
        a.push_back(x);
    }
    prefix_sum(a);
}