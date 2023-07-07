#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;cin>>t;
  while(t--)
  {
     int n;cin>>n;
     string s,t,u;cin>>s>>t>>u;
     int rot=abs(s[0]-t[0])%26;
     for(int i=0;i<u.size();i++)
     {
      u[i]=(u[i]+rot)%26;
     }
     cout<<u;
     cout<<endl;
  }
}