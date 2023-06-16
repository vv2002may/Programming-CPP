#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int m,n,k,s,l=0;
    cin>>m>>n>>k>>s;
    char ch[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ch[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ch[i][j]=='.')
            l=l+3;
            else if(ch[i][j]=='*')
            l=l-4;
            else 
            {
                l++;
                break;
            }
        }
        l--;
    }
    cout<<endl;
    s=s-l;
    if(s>=k)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    cout<<s<<endl;
}