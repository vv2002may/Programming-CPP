#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> insert(vector<int> v, int n)
{
    int temp = v[n];
    float i = n;
    while (i > 0 && temp > v[ceil(i / 2) - 1])
    {
        v[i] = v[ceil(i / 2) - 1];
        i = ceil(i / 2) - 1;
    }
    v[i] = temp;
    return v;
}
int main()
{
    cout << "Enter size of heap : ";
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
        v = insert(v, i);
    double f = log(v.size());
    for (int i = 0, j = 0; i <= ceil(f); i++)
    {
        int p = j + pow(2, i);
        while (j < p && j < v.size())
        {
            cout << v[j] << " ";
            j++;
        }
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(v[i], v[0]);
        v = insert(v, i);
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}