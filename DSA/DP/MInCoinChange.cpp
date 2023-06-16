#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
#define ll				long long int
#define fori(a,n,b)		for(ll i=a;i<n;i+=b)
#define ifor(a,n,b)		for(ll i=a;i>=0;i-=b)
// Top down approach
int coin(int sum,int a[],int n,int dp[])
{
    if(sum==0)
    return 0;
    if(dp[sum]!=0)
    return dp[sum];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(sum-a[i]>=0)
        {
            int subprob=coin(sum-a[i],a,n,dp);
            ans=min(ans,subprob+1);
        }
    }
    dp[sum]=ans;
    return dp[sum];
}

// Bottom up approach
int coinB(int sum,int a[],int n,int dp[])
{
    dp[1]=1;
    int ans=INT_MAX;
    for(int i=2;i<=sum;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(sum-a[i]>=0)
            ans=min(dp[sum-a[i]],ans)+1;
        }
        dp[i]=ans;
    }
    return dp[sum];
}
int main()
{
    system("clear");
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum;    cin>>sum;
    int dp[100]={0};
    cout<<coinB(sum,a,n,dp);
    for(int i=0;i<=sum;i++)
    cout<<dp[i]<<endl;
    cout<<endl;
}