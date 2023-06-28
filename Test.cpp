#include "bits/stdc++.h"
using namespace std;
int main()
{
   int n, p;
   cin >> n >> p;
   vector<int> a;
   map<int, int> m, r;
   for (int i = 0; i < n; i++)
   {
      int t;
      cin >> t;
      if (m[t] == 0)
      {
         a.push_back(t);
         m[t] = 1;
      }
   }
   int j = a.size()-1;
   for (int i = 0; i < p; i++)
   {
      int b;
      cin >> b;
      if (m[b] != 1)
      {
         a.push_back(b);
         j++;
      }
      if (r[b] == 0)
      {
         sort(a.begin(), a.end(), greater<int>());
         int start = 0, end = j;
         while (start <= end)
         {
            int mid = (start + end) / 2;
            if (b == a[mid])
            {
               r[b] = mid + 1;
               break;
            }
            else if (a[mid] > b)
               start = mid + 1;
               else
               end = mid - 1;
         }
      }
      cout << r[b] << endl;
      j = r[b];
   }
}