#include<iostream>
using namespace std;

int power(int n,int po)//   O(n)
{
    if(po==0)
    return 1;
    return n*power(n,po-1);
}
int fast_power(int a,int b)//   O(logn) : better way
{
    if(b==0)
    return 1;
    int ans;
    ans=fast_power(a,b/2);
    ans*=ans;
    if(b&1)//using bitwise and to find a is odd or even
    {
        return ans*a;
    } 
    return ans;
}
int main()
{
int num;    cin>>num;
int pow;    cin>>pow;
cout<<power(num,pow);
cout<<endl;
cout<<fast_power(num,pow)<<endl;
}