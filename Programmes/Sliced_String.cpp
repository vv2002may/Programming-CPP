#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a,b;
    cin>>a>>b;
    while(a<=b)
    {
        cout<<s[a];
        a++;
    }
}