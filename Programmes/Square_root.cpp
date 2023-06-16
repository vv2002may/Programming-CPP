#include<iostream>

using namespace std;
int main()
{
    system("clear");
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    float a=1,t=1;
    while(t>0.000001)
    {
        while(a*a<=n)
        a=a+t;
        a=a-t;
        t/=10;
    }
    cout<<"Square root is "<<a<<endl;
}