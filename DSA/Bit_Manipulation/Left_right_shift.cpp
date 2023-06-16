#include <iostream>
using namespace std;
int main()
{
    system("clear");
    // left shift
    // a<<b=a*(2 power b)
    // append b 0s in the end of binary string of a
    cout<<(2<<4)<<endl;

    // right shift
    // a>>=a/(2 power b)
    // discard b bits from the end of binary string
    cout<<(5>>1);
    cout<<endl;
}