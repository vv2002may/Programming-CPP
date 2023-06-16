#include<iostream>
using namespace std;
//find nth term of series :-
// 0 1 1 2 3 5 8 13 . . .
int main()
{
    system("clear");
    int n;
    cout<<"Enter a value : ";
    cin>>n;
    int a=0,b=1,s=0;
        if(n==1)
        cout<<a;
        else if(n==2 and n==3)
        cout<<b;
    for(int i=2;i<n;i++)
    {
        s=a+b;
        a=b;
        b=s;
    }
    cout<<"Nth term : "<<s<<endl;
}