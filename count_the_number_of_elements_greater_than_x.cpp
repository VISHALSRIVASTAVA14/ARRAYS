#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int i,x,y,z=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>x;
        a.push_back(x);
    }
    cout<<"enter a number whose greater is to be found:";
    cin>>y;

    for(i=0;i<a.size();i++)
    {
        if(a[i]>y)
        {
            z++;
        }
    }
    cout<<"the number of elements greater than "<<y<<" is:"<<z;
}