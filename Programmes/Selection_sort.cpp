#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n,p,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        k=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        p=a[i];
        a[i]=a[k];
        a[k]=p;
    }
    cout<<"Sorted Array!\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}