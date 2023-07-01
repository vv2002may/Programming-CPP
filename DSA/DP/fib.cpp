#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int fib(int n,vector<int>&dp)
{
   if(n<2)
      return n;
   if(dp[n]!=-1)
   return dp[n];
   return dp[n] = fib(n-1,dp)+fib(n-2,dp);
}
int main()
{
  int n;
   cin >> n;
   vector<int> dp(n + 1, -1);
   cout<<fib(n, dp);
  cout<<endl;
}