// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool compare(int a,int b)
// {
//     //a>b :- for descending order
//     //a<b :- for ascending order
//     cout<<"comparing "<<a<<" and "<<b<<endl;
//     return a<b;
// }

// int main()
// {
//     system("clear");
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     sort(a,a+n,compare);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

#include<iostream>
using namespace std;
bool com(int a,int b)
{
    cout<<a<<" "<<b<<endl;
    return a>b;
}
int main()
{
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,com);//here [a,a+n)
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}