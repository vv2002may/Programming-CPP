#include<iostream>
using namespace std;

int m(int a,int b)
{
    if(b==0)
    return 0;
    return a+m(a,b-1);
}

int main()
{
system("clear");
int a,b;
cin>>a>>b;
cout<<m(a,b);
cout<<endl;
}