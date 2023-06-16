#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// all possible subsequence for sum (no repetation)
// void fun(int ind,vector<int> &ds,int s,int sum,int a[],int n)
// {
//     if(ind==n)
//     {
//         if(s==sum)
//         {
//             for(auto x:ds)
//             cout<<x<<" ";
//             cout<<endl;
//         }
//         return;
//     }
//     ds.push_back(a[ind]);
//     s+=a[ind];
//     fun(ind+1,ds,s,sum,a,n);
//     s-=a[ind];
//     ds.pop_back();
//     fun(ind+1,ds,s,sum,a,n);
// }

// count all possible subsequence for sum (no repetation)
// int fun(int ind,int s,int sum,int a[],int n)
// {
//     if(ind==n)
//     {
//         if(s==sum)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     s+=a[ind];
//     int l=fun(ind+1,s,sum,a,n);
//     s-=a[ind];
//     int r=fun(ind+1,s,sum,a,n);
//     return (l+r);
// }

// all possible subsequence for sum with repetation
void findcomb(int ind,int target,vector<int>& arr,vector<vector<int> > & ans,vector<int>&ds)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    // pick up element
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        findcomb(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    findcomb(ind+1,target,arr,ans,ds);
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(1);
    vector<int> ds;
    vector<vector<int> > ans;
    // cout<<fun(0,0,2,a,3);
    findcomb(0,2,a,ans,ds);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
}