#include<iostream>
using namespace std;

class x
{
    public:
    int n;
};
int main()
{
    x x1;
    int x::*ptr = &x::n;
    x1.*ptr=10;
    cout<<x1.*ptr;
}