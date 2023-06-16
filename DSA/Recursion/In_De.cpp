#include<iostream>
using namespace std;

void de(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";//top to base case
    de(n-1);
}
void in(int n)
{
    if(n==0)
        return;
    in(n-1);
    cout<<n<<" ";//base case to top
}
int main()
{
    system("clear");
    de(10);
    cout<<endl;
    in(10);
    cout<<endl;
}