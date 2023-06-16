#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// print all subsequence 
// void solve(int i,vector<int> ds,vector<int> a,int s,int sum) 
// {
//     if(i==a.size())
//     {
//         if(s==sum)
//         {
//             for(auto x:ds)
//             cout<<x<<" ";
//             cout<<endl;
//         }
//         return;
//     }
    
//     ds.push_back(a[i]);
//     s=s+a[i];
//     solve(i+1,ds,a,s,sum);
//     ds.pop_back();
//     s=s-a[i];
//     solve(i+1,ds,a,s,sum);
// }


// print only first subsequence matching condition
// bool solve(int i,vector<int> ds,vector<int> a,int s,int sum) 
// {
//     if(i==a.size())
//     {
//         if(s==sum)
//         {
//             for(auto x:ds)
//             cout<<x<<" ";
//             cout<<endl;
//             return true;
//         }
//         return false;
//     }
    
//     ds.push_back(a[i]);
//     s=s+a[i];
//     if(solve(i+1,ds,a,s,sum)==true)
//     return true;
//     ds.pop_back();
//     s=s-a[i];
//     if(solve(i+1,ds,a,s,sum)==true)
//     return true;
//     return false;
// }

// print number of subsequence
int solve(int i,vector<int> a,int s,int sum)
{
    if(i==a.size())
    {
        if(s==sum)
        return 1;
        return 0;
    }
    s+=a[i];
    int l=solve(i+1,a,s,sum);
    s-=a[i];
    int r= solve(i+1,a,s,sum);
    return(l+r);
}
int main()
{
    int n,temp,sum,s=0;cin>>n;
    vector<int> a,ds;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    cin>>sum;
    // cout<<endl<<solve(0,ds,a,s,sum);
    cout<<solve(0,a,s,sum);
    cout<<endl;
}