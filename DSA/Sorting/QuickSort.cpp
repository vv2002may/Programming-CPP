#include <iostream>
#include <algorithm>
using namespace std;
int partition(int a[], int l, int h)
{
    int i = l;
    int j = h;
    do
    {
        do
        {
            i++;
        } while (a[i] <= a[l]);
        do
        {
            j--;
        } while (a[j] > a[l]);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[j], a[l]);
    return j;
}
void quick(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quick(a, l, j);
        quick(a, j + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    quick(a, 0, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}