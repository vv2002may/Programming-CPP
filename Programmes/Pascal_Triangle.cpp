#include<iostream>
using namespace std;

int factorial(int n, int r)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a=a*i;
    }
    int b=1;
    for(int i=1;i<=r;i++)
    {
        b=b*i;
    }
    int c=1;
    for(int i=1;i<=(n-r);i++)
    {
        c=c*i;
    }
    return(a/(b*c));
}
int main()
{
system("clear");
for(int i=0;i<6;i++)
{
    for(int j=i;j<6;j++)
    cout<<" ";
    for(int j=0;j<=i;j++)
    {
        cout<<factorial(i,j)<<" ";
    }
    cout<<endl;
}
cout<<endl;
}