#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int t,p=0;
    cin>>t;
    string l,s;
    while(t--)
    {
        cin>>l;
        if(l.length()>p)
        {
            p=l.length();
            s=l;
        }
    }
    cout<<s<<"  "<<s.length()<<endl;
}