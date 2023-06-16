#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1)
    return 1;
    return n*factorial(n-1);
}

int main()
{
    system("clear");
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<factorial(num)<<endl;
}