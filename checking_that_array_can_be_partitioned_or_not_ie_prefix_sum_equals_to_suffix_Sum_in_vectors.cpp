#include<iostream>
#include<vector>
using namespace std;

void partition(vector<int> &a)
{
    int i,j,c=0;
    bool y=false;
    for(i=0;i<a.size();i++)
    {
        int d=0;
        for(j=i+1;j<a.size();j++)
        {
            d=d+a[j];
        }
        c=c+a[i];
        if(c==d)
        {
            cout<<"the array can be partitioned";
            y=true;
        }
    }
    if(y==false)
    {
        cout<<"the array cannot be partitioned";
    }
}

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
    partition(a);
}
