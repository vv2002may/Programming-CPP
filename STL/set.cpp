#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    // unique and ordered elements
    // set<int> s;
    // for(int i=0;i<5;i++)
    // {
    //     int k;cin>>k;
    //     s.insert(k);
    // }
    // s.erase(5);
    // auto it = s.find(1);
    // s.erase(it);
    // for(auto it:s)
    // cout<<it<<",";
    // cout<<endl;
// make pair
    set< pair<int,int> > p;
    for(int i=0;i<5;i++)
    {
        p.insert(make_pair(i,i+9));
    }
    // gives next pair
    // lower_bound --> >=
    // upper_bound --> >
    p.insert(make_pair(0,9));
    p.insert(make_pair(0,1));
    auto it = p.lower_bound(make_pair(0,9));
    cout<<it->first<<"-->"<<it->second<<endl;
    it = p.upper_bound(make_pair(0,1));
    cout<<it->first<<"-->"<<it->second<<endl;
    for(auto it : p)
    {
        cout<<it.first<<"    "<<it.second<<endl;
    }
    cout<<endl;
}