#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int m,n;
    cin>>m>>n;

    int p=11,a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=p;
            p++;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // for(int j=n-1;j>=0;j--)
    // {
    //     for(int i=0;i<m;i++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Update previous array by rotating 90˚ anti-clockwise

    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<m-1;i++)
        {
            swap(a[i][j],a[i][j+1]);
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<m;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}