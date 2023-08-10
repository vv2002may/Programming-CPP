#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   int done = 0, c = 0;
   while (done == 0)
   {
      done = 1;
      for (int i = 0; i < n - 2; i++)
      {
         if (a[i] > a[i + 2])
         {
            done = 0;
            swap(a[i], a[i + 2]);
            c++;
         }
      }
   }
   cout << " swap: " << c << endl;

   // vector<int> even, odd;
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << " ";
      // if (i % 2 == 0)
      // {
      //    even.push_back(a[i]);
      // }
      // else
      // {
      //    odd.push_back(a[i]);
      // }
   }
}