#include<iostream>
using namespace std;
void fun()
{
    static int t=10;//value of t assign only first time 
    //rest time calling fun() does not re-assign the value
    t++;
    cout<<t<<endl;

}
int main()
{
system("clear");
//static int t=10;
fun();
fun();
cout<<endl;
}