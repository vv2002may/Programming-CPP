#include <iostream>
using namespace std;
int main()
{
    system("clear");
    
    int num;    cin>>num;  //5=101
    int i;  cin>>i;        //i=1
    int mask=1<<i;         //010
    cout<<mask<<endl;
    // find ith bit from right
    if((num & mask) > 0)
    cout<<1<<endl;
    else
    cout<<0<<endl;

    // set ith bit from right
    cout<<(num|mask)<<endl;

    // clear ith bit from right
    int mask1=~mask;
    cout<<(num & mask1)<<endl;

    // update ith bit from right
    // int v;  cin>>v;
    // int mask2=~mask;
    // int cleared_n=num & mask2;
    // cout<<(cleared_n | (v<<i))<<endl;

    // clear last ith bits
    int mask3=(~1 << i);
    cout<<mask3<<" ";
    cout<<(num & mask3)<<endl;

    // clear ith to jth bit
    int in,jn;    cin>>in>>jn;
    int a=(-1)<<(jn+1);
    int b=(1<<in) - 1;
    int mask4=a|b;
    cout<<(num & mask4)<<endl;
    cout<<endl;
}