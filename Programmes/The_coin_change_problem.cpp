#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long fun(int n, vector<long> v)
{
    int m=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        int s=0;
        for(int j=0;s<=n;j++)
        {
            s+=v[i];
        }
    }
}

int main()
{
system("clear");
vector<long> v;
int m,n;
cin>>n>>m;
for(int i=0;i<m;i++)
{
    int t;
    cin>>t;
    v.push_back(t);
}
long k=fun(n,v);
cout<<k<<endl;
}