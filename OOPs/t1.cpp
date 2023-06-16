#include<iostream>
using namespace std;
int main()
{
system("clear");
try
{    
   a[8]=0;
}
catch(exception e)
{
    cout<<e.what()<<endl;
}
catch(...)
{
    cout<<"Default";
}
cout<<endl;
}