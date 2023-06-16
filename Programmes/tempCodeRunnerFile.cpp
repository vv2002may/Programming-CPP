#include<iostream>
using namespace std;
int main()
{
    int t,n;
    //cin>>t;

    for(int i=2;i<1000;i++)
    {
        int y=0;
        for(int j=2;j<=1000;j++)
        {
            if((i%j==0) && (j!=2) && (j!=3) && (j!=5) && (i!=j))
            y=1;
        }
        if(y==0)
        {
            cout<<i<<endl;
        }
        
    }
    //for(int i=0;i<p;i++)
   // cout<<a[i]<<endl;
    /*while(t--)
    {
        cin>>n;
        if(n%2==0)
        cout<<n<<endl;
        else
        {
            cout<<((n/2)+1)<<endl;
        }
    }
*/
}