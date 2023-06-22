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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n;i++)
      cin >> a[i];

    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
      int s = a[i];
      vector<ll> temp;
      int y = 0;
      for (int j = i + 1; j < a.size(); j++)
      {
        if(s>=a[j])
        {
          s = s ^ a[j];
          y = 1;
        }
        else
          temp.push_back(a[j]);
      }
      if(y==1)
        count++;
      a = temp;
    }
    cout << count;
    cout << endl;
  }
}