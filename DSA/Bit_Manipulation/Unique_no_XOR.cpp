#include <iostream>
using namespace std;
int main()
{
    // system("clear");
    // a^b^a=b
    // 0^a=a;

    int n;  cin>>n;
    int ans=0;
    int no;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        ans=ans^no;
    }
    cout<<no;
    cout<<endl;
}