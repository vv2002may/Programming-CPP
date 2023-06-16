#include<iostream>
using namespace std;
int main()
{
    system("clear");
    

    //Maximum of sum array : 3 nested for loop
    /*
    int s,p=INT_MIN,a,b;
    for(int i=1;i<5;i++)
    {
        cout<<"Pairs of "<<i<<endl<<endl;
        for(int j=i;j<5;j++)
        { 
            s=0;
            for(int k=i;k<=j;k++)
            {
                cout<<k<<" ";
                s+=k;
            }
            if(s>p)
            {
                p=s;
                a=i;    b=j;
            }
            cout<<endl;
            cout<<"Sum : "<<s;
            cout<<endl;
        }
        cout<<endl;
    }
    while(a<=b)
    {
        cout<<a<<" ";
        a++;
    }
    cout<<endl<<"Max Sum : "<<p<<endl;*/

    //Maximum sum of subarray : 2 nested for loop
    
    //Maximum sum of subarray : 1 for loop(kadane's Algorithm)

    int a=0,s=0;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int c[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    cin>>c[i];

    for(int i=0;i<n;i++)
    {
        a=a+c[i];
        if(a<0)
        a=0;
        else if(a>s)//s=max(a,s);
        s=a;
    }
    cout<<"Maximum Sum : "<<s<<endl;
}