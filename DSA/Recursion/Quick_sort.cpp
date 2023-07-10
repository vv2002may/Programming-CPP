#include<iostream>
using namespace std;

int part(int a[],int s, int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    while(j<=e-1)
    {
        if(a[j]<=pivot)
          {  
              i++;
              swap(a[i],a[j]);
          }
          j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quicksort(int a[],int s,int e)
{
    if(s>=e)
    return;
    int p=part(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main()
{
int a[]={2,7,8,6,1,5,4};
int n=sizeof(a)/sizeof(int);
quicksort(a,0,n-1);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}