#include<iostream>
using namespace std;

int sum(int n)
{
    int s;
    if(n==1)
    {
        return n;
    }
    s=n+sum(n-1);
    return s;
}

int main()
{
    int num;
    cin>>num;
    cout<<sum(num)<<endl;
}