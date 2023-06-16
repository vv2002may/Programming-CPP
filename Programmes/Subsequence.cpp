#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// TC=O(n*2^n)
// SC=O(n)
void sub(int i,vector<int> ds,vector<int> a,int n)
{
    if(i==n)
    {
        for(auto x:ds)
        cout<<x<<" ";
        cout<<endl;
        return;
    }
    ds.push_back(a[i]);
    sub(i+1,ds,a,n);
    ds.pop_back();
    sub(i+1,ds,a,n);
}

int main()
{
    int n,temp;cin>>n;
    vector<int> a,ds;
    for(int i=0;i<n;i++)
    {
        // cin>>a[i];
        cin>>temp;
        a.push_back(temp);
    }
    sub(0,ds,a,n);
    cout<<endl;
}