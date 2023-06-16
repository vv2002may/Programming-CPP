#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    // system("clear");
    vector<int> v;
    // v.reserve(100);
    // cout<<v.size()<<endl<<v.capacity<<endl<<v.max_size;// size and capacity can be different
    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    // sort(v.begin(),v.end(),cmp);
    // v.pop_back();
    // cout << v.capacity() << endl;
    // v.erase(v.begin() + 2, v.begin() + 4);

    cout << "Elements of array : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // v.clear();//clear all the elements of the vector leave it with size=0;
    int sum = 0;
    cout << "\nSum of vector elements : ";
    while (!v.empty())
    {
        sum += v.back();
        v.pop_back();
    }
    cout << sum;
    cout << endl
         << v.max_size() << endl;
}