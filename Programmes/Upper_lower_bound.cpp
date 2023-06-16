#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    system("clear");
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
    cin>>key;
    int u=upper_bound(a,a+n,key)-a,l=lower_bound(a,a+n,key)-a;
    cout<<u<<endl<<l<<endl;
}