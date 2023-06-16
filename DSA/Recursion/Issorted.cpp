#include<iostream>
using namespace std;

bool issort(int a[],int n)
{
    if(n==0 or n==1)
    return true;
    if(a[0] < a[1] and issort(a+1,n-1))
    return true;
    return false;
}

int main()
{
    system("clear");
    int a[]={1,2,3,4,5};
    cout<<issort(a,5)<<endl;
}