#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n;
    cout<<"Enter number in list : ";
    cin>>n;
    int a,ans;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ans=ans^a;
    }
    cout<<"Unique number : "<<ans;
}