#include<iostream>
using namespace std;
int main()
{
system("clear");
int t,n,c,m;
cin>>t;
while(t--)
{
    cin>>n>>c>>m;
    int b,s=0,r;
    b=n/c;
    s=b;
    while(b>=m)
    {
    r=b%m;  b=b/m;  s+=b;
    b=b+r;
    }
    cout<<s<<endl;
}
cout<<endl;
}