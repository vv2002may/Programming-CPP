#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
system("clear");
vector<int> a,b,e;

int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    a.push_back(temp);
}
sort(a.begin(),a.end());
a.push_back(0);
int c=a[0],d=1;
for(int i=1;i<=n;i++)
{
    if(c==a[i])
    {
        d++;
        c=a[i];
    }
    else
    {
        b.push_back(c);
        e.push_back(d);
        d=1;
        c=a[i];
    }
}
int max=0,mm;
for(int i=0;i<e.size();i++)
{
    if(e[i]>max)
    {
        max=e[i];
        mm=b[i];
    }
}
cout<<mm<<endl;
}