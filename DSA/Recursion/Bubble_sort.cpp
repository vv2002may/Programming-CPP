#include<iostream>
using namespace std;

// void bubble(int *a,int i,int n)
// {
//     if(i==n)
//     return;
//     if(a[i]>a[i+1])
//     {
//         int k=a[i];
//         a[i]=a[i+1];
//         a[i+1]=k;
//     }
//     bubble(a,i+1,n);
// }

void bubble2(int *a,int n)
{
    if(n==1)
    return;
    if(a[0]>a[1])
    {
        int k=a[0];
        a[0]=a[1];
        a[1]=k;
    }
    bubble2(a+1,n-1);
}

void bubble3(int *a,int j,int n)
{
    if(n==1)
    return;
    if(j==n-1)
    return bubble3(a,0,n-1);
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
    bubble3(a,j+1,n);
    return;
}

int main()
{
    system("clear");
    int a[]={5,3,6,2,9};
    
    // for(int i=0;i<4;i++)
    // bubble2(a,5);

    bubble3(a,0,5);

    for(int i=0;i<5;i++)
    cout<<a[i]<<endl;
}