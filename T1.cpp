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
      vector<ll> v(n);
      for (int i = 0; i < n; i++)
         cin >> v[i];
      int left = 0;
      ll sum = 0;
      ll count = 0;
      for (int right = 0; right < n; right++)
      {
         sum += v[right];
         if (right - left + 1 == 3)
         {
            ll k = sum % 3;
            k = 3 - k;
            if (k != 0)
            {
               for (int i = right; i >= left; i--)
               {
                  if (v[i] % 3 != 0)
                  {
                     sum -= v[i];
                     v[i] += k;
                     sum += v[i];
                     break;
                  }
               }
               count += k;
            }
            sum -= v[left];
            left++;
         }
      }
      cout << count;
      cout << endl;
   }
}