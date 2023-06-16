#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"Sorted Array!\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}