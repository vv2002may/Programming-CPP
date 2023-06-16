#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    int a=1,b=1,y=2,s=0;
    cout<<1<<" "<<1<<endl;
    for(int i=1;i<n;i++)
    {
        y++;
        int p=y;
        while(p--)
        {
            s=a+b;
            cout<<(s)<<" ";
            a=b;
            b=s;
        }
        cout<<endl;
    }
}