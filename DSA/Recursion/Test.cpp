#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long 
bool sol(vector<ll> &a,ll n,ll b,ll ind,ll am)
{
	if(am==b)
	return true;
	if(ind==n)
	{
		return false;
	}
	// ll p=am&a[ind];
	if(sol(a,n,b,ind+1,am&a[ind])==true)
	return true;
	// pre=am&a[ind];
	if(sol(a,n,b,ind+1,am&a[ind])==true)
	return true;
	return false;
}

int main()
{
  ll t;cin>>t;
  while(t--)
  {
	ll n,b;
	cin>>n>>b;
	vector<ll> a(n);
	for(ll i=0;i<n;i++)
	cin>>a[i];
	if(sol(a,n,b,0,1)==1)
	cout<<"Yes";
	else
	cout<<"No";
	cout<<endl;
  }
}