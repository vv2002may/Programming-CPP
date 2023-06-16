#include<iostream>
using namespace std;

int main()
{
system("clear");
int r;  cin>>r;
int c;  cin>>c;
int n;  cin>>n;
for(int m=0;m<r;m++)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                cout<<"e";
            }
            cout<<"/";
        for(int k=1;k<c;k++)
        {
            for(int j=0;j<2*i;j++)
            {
                cout<<"o";
            }
            cout<<"\\";
            for(int j=2*i;j<(n*2-2);j++)
            {
                cout<<"e";
            }
            cout<<"/";
        }
        for(int j=0;j<2*i;j++)
            {
                cout<<"o";
            }
            cout<<"\\";
        for(int j=i;j<n-1;j++)
        cout<<"e";
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j<n;j++)
            {
                cout<<"e";
            }
            cout<<"\\";
        for(int k=1;k<c;k++)
        {
            for(int j=2*i;j<(n*2-2);j++)
            {
                cout<<"o";
            }
            cout<<"/";
            for(int j=0;j<2*i;j++)
            {
                cout<<"e";
            }
            cout<<"\\";
        }
        for(int j=2*i;j<(n*2-2);j++)
            {
                cout<<"o";
            }
            cout<<"/";
        for(int j=n-i;j<n;j++)
        cout<<"e";
        cout<<endl;
    }
}

cout<<endl;
}