#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int s=0,k;
    cin>>k;
    /*//for any array
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i] + a[j])==k)
            s++;
        }
    }
    cout<<s<<endl;*/
    
    // for sorted array
    for(int i=0;i<n;i++)
    {
        s=a[i] + a[n-1];
        if(s>k)
        n--;
        else if(s<k)
        i++;
        else if(s==k)
        {
            cout<<a[i]<<","<<a[n-1]<<endl;
            i++;
            n--;
        }
    }

}