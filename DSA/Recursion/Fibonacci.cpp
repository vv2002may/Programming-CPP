// #include<iostream>
// using namespace std;

// int fib(int k)
// {
//     if(k==0 or k==1)
//     return k;
//     int f1=fib(k-1);
//     int f2=fib(k-2);
//     return f1 + f2; 
// }
// int main()
// {
//     system("clear");
//     int k;
//     cin>>k;
//     cout<<fib(k)<<endl;
// }

#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int fib(int n)
{
    if(n==0 or n==1)
    return 1;
    int f1=fib(n-1);
    int f2=fib(n-2);
    return f1+f2;
}


int main()
{
    int n;cin>>n;
    cout<<fib(n);
    cout<<endl;
}