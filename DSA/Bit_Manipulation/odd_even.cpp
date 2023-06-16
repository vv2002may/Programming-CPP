#include <iostream>
using namespace std;
int main()
{
    system("clear");
    // check whether number is even or odd
    int number; 
    cin>>number;
    if(number & 1)
    cout<<"odd\n";
    else
    cout<<"even\n";
    cout<<endl;
}