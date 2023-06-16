#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("clear");
    int a[5]={1,2,3,4,5};
    rotate(a,a+3,a+5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";

    cout<<endl;

    vector<int> v(5);
    for(int i=0;i<5;i++)
    v[i]=i+5;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i=0;i<5;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    next_permutation(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";

    
    cout<<endl;
}