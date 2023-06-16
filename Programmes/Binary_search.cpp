#include<iostream>
using namespace std;

void binary_search(int n,int *a,int key)
{
    int s=0,e=n-1,y=0;
    while(s<=e)
    {
        int mid = (s+e)/2;
        cout<<a[mid]<<" ";
        if(key==a[mid])
        {
            printf("%d is at index %d",a[mid],mid);
            y=1;
            break;
        }
        else if(key>a[mid])
        s=mid-1;
        else
        e=mid+1;
    }
    if(y==0)
    cout<<"No such element.\n";
}

int main()
{
    system("clear");
    int n,key;
    cout<<"Enter the size of array : ";
    cin>>n;

    int *a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element you want to search : ";
    cin>>key;
    binary_search(n,a,key);
}
