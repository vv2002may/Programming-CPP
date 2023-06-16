#include<iostream>
using namespace std;
int main()
{
    int b[100];//Memory allocated during compiled time;
    int *p,n;   cin>>n;
    p=new int [n]{0};//dynamically declaring array with initialisation 0;
    //Memeory assign during execution time
    for(int i=0;i<n;i++)
    cin>>a[i];//or cin>>*(a+i);
    delete [] p;
}