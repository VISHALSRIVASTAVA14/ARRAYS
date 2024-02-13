#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int i,x,j=0;
    for(i=0;i<5;i++)
    {
        cout<<"enter a number:";
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    while(j<a.size())
    {
        cout<<a[j]<<" ";
        j++;
    }
    cout<<"\n";

    a.insert(a.begin()+1,34);
    a.insert(a.end()-1,56);
    a.pop_back();
    a.erase(a.begin());
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}