#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int y;
    for(int i=0;i<n-1;i++)
    {
        y=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                y=1;
            }
        }
        if(y==0)
        break;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}