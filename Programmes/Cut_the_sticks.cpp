#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
system("clear");
vector<int> v;
int n;  cin>>n;
for(int i=0;i<n;i++)
{
    int temp;   cin>>temp;
    v.push_back(temp);
}

sort(v.begin(),v.end());
int s=n,j=1,k=v[0];
while(j<n)
{
    if(k!=0)
    {
        int p=0;
for(int i=0;i<n;i++)
{
    if(v[i]==0)
    {
        v[i]=0;
    }
    else
    {
    v[i]-=k;
    p++;
    }
}
cout<<p<<endl;
    }
while(j<n)
{
    if(v[j]!=k)
    {
        k=v[j];
        break;
    }
    j++;
}
}
cout<<endl;
}