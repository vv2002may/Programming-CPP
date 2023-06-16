#include<iostream>
#include<algorithm>
using namespace std;
bool com(string a, string b)
{
    cout<<a<<" "<<b<<endl;
    // return a>b;//sort by lexographically
    return a.length()>b.length();//sort by length
}
int main()
{
    string s1("Hello\n");
    cout<<s1;
    string s2="Hello\n";
    cout<<s2;
    string s3;
    getline(cin,s3);
    cout<<s3<<endl;
    string arr[5]={"Cf","Bff","Eff","Af","Dffff"};
    sort(arr,arr+5,com);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
}