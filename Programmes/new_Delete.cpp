#include <iostream>
using namespace std;
#define ll				long long int
#define fori(a,n,b)		for(ll i=a;i<n;i+=b)
#define ifor(a,n,b)		for(ll i=a;i>=0;i-=b)
int main()
{
    system("clear");
    int **arr;
    int r,c;
    cin>>r>>c;
    arr=new int *[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[r];
    }
    int val=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}