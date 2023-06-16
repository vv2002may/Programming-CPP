#include<iostream>
using namespace std;

int ls(int a[],int n,int key)
{
    if(n<0)
    return -1;
    if(a[n-1]==key)
    return n-1;
    return ls(a,n-1,key);
}
int ls2(int a[],int i,int n,int key)
{
    if(i==n)
    return -1;
    if(a[i]==key)
    return i;
    return ls2(a,i+1,n,key);
}
int ls3(int a[],int n,int key)//first occurence
{
    if(n==0)
    return -1;
    if(a[0]==key)
    return 0;
    int i=ls3(a+1,n-1,key);
    if(i==-1)
    return -1;
    return i+1;
}
int ls4(int a[],int n,int key)//last occurence
{
    if(n==0)
    return -1;
    int i=ls4(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        return 0;
        else
        return -1;
    }
    return i+1;
}
void ls5(int a[],int i,int n,int key)//all occurence{refer to ls2}
{
    if(i==n)
    return;
    if(a[i]==key)
    {
        cout<<i<<endl;
    }
    ls5(a,i+1,n,key);
}
void ls6(int a[],int n,int key)//all occurence{refer to ls}
{
    if(n<0)
    return;
    ls6(a,n-1,key);
    if(a[n-1]==key)
    cout<<(n-1)<<endl;
}
int ls7(int *a,int i,int n,int key,int *out,int j)//store index of all occurences
{
    if(i==n)
    return j;
    if(a[i]==key)
    {
        out[j]=i;
        return ls7(a,i+1,n,key,out,j+1);
    }
    return ls7(a,i+1,n,key,out,j);
}
int main()
{
    system("clear");
    int a[]={1,2,7,4,5,6,7,8,7,10};
    // cout<<ls(a,10,7)<<endl;
    // cout<<ls2(a,0,10,3)<<endl;
    // cout<<ls3(a,10,7)<<endl;
    // cout<<ls4(a,10,7)<<endl;
    // ls5(a,0,10,7);
    // ls6(a,10,7);
    int out[10];
    int count=ls7(a,0,10,7,out,0);
    for(int i=0;i<count;i++)
    cout<<out[i]<<endl;
}