#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;
      vector<ll> arr(n);
      for (int i = 0; i < n; i++)
      {
         ll a;
         cin >> a;
         arr[i] = a;
      }
      while (arr.size() > 1)
      {
         vector<ll> temp(arr.size()-1);
         for (int i = 0; i < arr.size() - 1; i++)
         {
            temp[i] = abs(arr[i] - arr[i + 1]);
         }
         arr = temp;
      }
      if (arr[0] != 0)
         cout << "NO";
      else
         cout << "YES";

      cout << endl;
   }
}