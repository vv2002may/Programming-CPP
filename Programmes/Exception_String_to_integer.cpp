#include<iostream>
using namespace std;
int main()
{
    system("clear");
    string s;
    cin>>s;
    try{
        int a=stoi(s);
        cout<<a<<endl;
    }
    catch(exception &x)
    {
        cout<<"Bad String\n";
    }
    return 0;
}
