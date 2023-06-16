#include <iostream>
using namespace std;

bool comp(int a, int b)
{
    cout<<a<<"  "<<b<<endl;
    return a>b;
}

int *fun()
{
    int a[5]={11,44,32,46,5}; // static array
    // cout<<a<<endl;


    // find function
    auto it=find(a,a+5,9);
    // cout<<*it<<endl;
    int index =it-a;
    cout<<index<<endl;
    if(index==5)
    cout<<"Key not present!\n";
    

    // binary search function
    bool presen=binary_search(a,a+5,7);
    if(presen)
    cout<<"Y!\n";
    else
    cout<<"N!\n";

    // lower bound and upper bound
    int n=5;
    int b[n];
    b[0]=1; b[1]=40; b[2]=40; b[3]=50; b[4]=60;
    auto lb=lower_bound(b,b+n,50);
    cout<<(lb-b)<<endl;
    auto ub=upper_bound(b,b+n,1);
    cout<<(ub-b)<<endl;

    // sort function
    cout<<"Compare : \n";
    sort(a,a+n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return a;
    // we should never return local variable
}
// array deleted after function ends

int main()
{
    system("clear");
    int *b=fun();
    // cout<<b<<endl;
    // cout<<b[0]; // b[0]=1,garbage,segmentation fault
    // delete [] b;
    cout<<endl;
}