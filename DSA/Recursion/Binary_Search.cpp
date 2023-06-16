#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
bool bin(int a[],int i, int j,int key)
{
    if(i>j)
    return false;
    int mid=(i+j)/2;
    if(a[mid]>key)
    {
        return bin(a,i,mid-1,key);
    }
    else if(a[mid]<key)
    {
        return bin(a,mid+1,j,key);
    }
    else
    return true;
}
int main()
{
    int n;cin>>n;   
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key;cin>>key;
    cout<<bin(a,0,n-1,key);
    cout<<endl;
}



// #include<iostream>
// using namespace std;
// int bs(int a[], int s, int e, int key)
// {
//     if(e>=s)
//     {
//         int m=s+(e-s)/2;
//         if(a[m]==key)
//         return m;
//         if(a[m]>key)
//         return bs(a,s,m-1,key);
//         return bs(a,m+1,e,key);
//     }
//    return -1;
// }
// int main()
// {
// system("clear");
// int a[]={1,2,3,4,5,6,7,8,9,10};

// cout<<bs(a,0,9,10)<<endl;
// }


