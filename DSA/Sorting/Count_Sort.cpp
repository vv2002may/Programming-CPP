#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }
    int c[m + 1];
    for (int i = 0; i < m + 1; i++)
        c[i] = 0;
    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    for (int i = 0, j = 0; i < m + 1;)
    {
        if (c[i] > 0)
        {
            a[j++] = i;
            c[i]--;
        }
        else
            i++;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}