#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.push_back(2);
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.push_back(3);
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.resize(5);
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.resize(10);
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;

    a.pop_back();
    cout<<"size:"<<a.size()<<endl;
    cout<<"capacity:"<<a.capacity()<<endl;
}