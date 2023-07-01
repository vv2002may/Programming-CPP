#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
 
class sol {
public:
    vector<vector<string>> res;
    vector<string> path;
    vector<vector<string>> partition(string s) {
        fun(0,s);
        return res;
    }

    void fun(int index,string s)
    {
        if(index==s.size())
        {
            res.push_back(path);
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispal(s,index,i))
            {
                path.push_back(s.substr(index,i-index+1));
                fun(i+1,s);
                path.pop_back();
            }
        }
    }
    bool ispal(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            return false;
        }
        return true;
    }
};

int main()
{
    string s="aabb";
    sol a;
    vector<vector<string>> res = a.partition(s);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
