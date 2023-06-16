#include<iostream>
using namespace std;
int main()
{
    system("clear");
    long long int t,n,y,x,temp,m=1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=2;
        y=n-1;
        temp=1;
        while(y!=0)
        {
            if(y%2!=0)
            temp=(x*temp)%m;
            x=(x*x)%m;
            y=y/2;
            printf("temp:%ld        x:%ld       y:%ld\n",temp,x,y);
        }
        cout<<endl;
    }
}