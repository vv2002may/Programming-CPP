#include<iostream>
using namespace std;
int *fun()
{
    int a[2];//wrong:- local array can not be returned
    //int *a=new int[2];
    a[0]=11;
    a[1]=12;
    cout<<a<<endl<<a[0]<<endl;
    return a;
}
int main()
{
    system("clear");
    int *b=fun();
    cout<<b<<endl;
    cout<<b[0]<<endl;//show garbage value on returning local array;
}