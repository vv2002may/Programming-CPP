#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define ll				long long int
#define fori(a,n,b)		for(ll i=a;i<n;i+=b)
#define ifor(a,n,b)		for(ll i=a;i>=0;i-=b)
// Top Down approach
int step(int n,int dp[])
{
    if(n==1)
    return 0;

    if(dp[n]!=0)
    return dp[n];

    int a1,a2,a3;
    a1=a2=a3=INT_MAX;
    if(n%3==0)
    a1=step(n/3,dp)+1;

    if(n%2==0)
    a2=step(n/2,dp)+1;

    a3=step(n-1,dp)+1;
    int ans=min(min(a1,a2),a3);
    return dp[n]=ans;
}
// Bottom up approach
int step2(int n)
{
    int dp[100]={0};
    int ans;
    dp[1]=0;
    
    for(int i=2;i<=n;i++)
    {
        int a1,a2,a3;
        a1=a2=a3=INT_MAX;
        if(i%3==0)
        a1=dp[i/3];
        if(i%2==0)
        a2=dp[i/2];
        a3=dp[i-1];
        dp[i]=min(min(a1,a2),a3)+1;
    }
    return dp[n];
}

int main()
{
    system("clear");
    int dp[100]={0};
    cout<<step2(6)<<endl;
    cout<<endl;
}