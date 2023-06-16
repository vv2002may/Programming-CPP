#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    system("clear");
    list<int> l;
    for(int i=10;i>0;i--)
    l.push_back(i);
    l.sort();
    l.reverse();
    l.pop_back();
    l.pop_front();
    l.push_front(100);

    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<(*it)<<"-->";
    }
    cout<<endl;
    // iterate over list
    for(int i:l)
    {
        cout<<i<<"->";
    }
    cout<<endl;
}