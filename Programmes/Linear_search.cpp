#include<iostream>
#include<climits>
using namespace std;
int main()
{
    system("clear");
    int n;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    cout<<"Enter number in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" numbers :-\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        largest=max(a[i],largest);
        smallest=min(a[i],smallest);
    }
    cout<<"Largest : "<<largest<<endl;
    cout<<"Smaallest : "<<smallest<<endl;
    

}
