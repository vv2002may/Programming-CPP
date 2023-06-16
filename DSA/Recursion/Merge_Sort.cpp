#include<iostream>
using namespace std;

void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid and j<=e)
    {
        if(a[i]<a[j])
        temp[k++]=a[i++];
        else
        temp[k++]=a[j++];
    }
    while(i<=mid)
    temp[k++]=a[i++];
    while(j<=e)
    temp[k++]=a[j++];

    for(int p=s;p<=e;p++)
    a[p]=temp[p];
}

void sort(int *a,int s,int e)
{
    if(s>=e)
    return;
    int mid = (s+e)/2;
    sort(a,s,mid);
    sort(a,mid+1,e);
    merge(a,s,e);
}

int main()
{
    system("clear");
    int a[]={4,2,7,5,1};
    sort(a,0,4);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}