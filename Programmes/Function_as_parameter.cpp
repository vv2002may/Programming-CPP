#include<iostream>
using namespace std;

bool compare(int a,int b)
{
    return a<b;
} 

void bubble_sort(int n,int a[],bool (&cmp)(int a,int b))
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(cmp(a[min],a[j]))
            min=j;
        }
      swap(a[i],a[min]);
    }
}

int main()
{
    system("clear");
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubble_sort(n,a,compare);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}