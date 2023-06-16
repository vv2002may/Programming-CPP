#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
system("clear");
vector<int> k, d;
int b,k1,d1;
cin>>b>>k1>>d1;

for(int i=0;i<k1;i++)
{
    int temp;
    cin>>temp;
    k.push_back(temp);
}
for (int i = 0; i < d1; i++)
{
    int temp;
    cin >> temp;
    d.push_back(temp);
}
int max = -1;
for (int i = 0; i < k1; i++)
{
    for (int j = 0; j < d1; j++)
    {
        int sum = k[i] + d[j];
        if (sum <= b && sum > max)
            max = sum;
    }
}

cout<<max<<endl;
}