#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int i,x,y,z;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>x;
        a.push_back(x);
    }
    cout<<"enter the number whose last occurence is to be found:";
    cin>>y;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==x)
        {
            z=i;
        }
    }
    cout<<"the last occurence of "<<y<<" is:"<<z;
}