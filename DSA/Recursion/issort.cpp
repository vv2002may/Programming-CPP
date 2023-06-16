// #include <iostream>
// #include <map>
// #include <set>
// #include <list>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
 
// void inc(int n)
// {
//     if(n==0)
//     {return;}
//     inc(n-1);
//     cout<<n<<" ";
    
// }
// void dec(int n)
// {
//     if(n==0)
//     {return;}
//     cout<<n<<" ";
//     dec(n-1);   
// }

// int main()
// {
//     int n;cin>>n;
//     inc(n);
//     cout<<endl;
//     dec(n);
//     cout<<endl;
// }


#include <iostream>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 bool issort(int a[],int n)
 {
    if(n==0 || n==1)
    return true;
    
    if(a[0]<a[1] && issort(a+1,n-1))
    return true;
    return false;
 }
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<issort(a,n);
    cout<<endl;
}