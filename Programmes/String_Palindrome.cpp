#include<iostream>
#include<string>
using namespace std;

bool ispalindrome(char a[],int l)
{
    int i=0;
    while(i<l)
    {
        if(a[i]==a[l])
        {
            i++;    l--;
        }
        else
        return false;
    }
    return true;
}

int main()
{
    system("clear");
    char a[100];
    cin.getline(a,100);
    /*int p=strlen(a),i;
    int y=0;
    for(i=0;i<p;i++,p--)
    {
        cout<<"i : "<<i<<"  p : "<<p-1<<endl;
        if(a[i]!=a[p-1])
        {
            y=1; 
            break;
                
        }
        
    }
    
    if(y==0)
    cout<<"YES!\n";
    else
    cout<<"NO!\n";
    */

   //Better Way

    int l=strlen(a)-1;
    if(ispalindrome(a,l))
    cout<<"YES!\n";
    else
    cout<<"NO!\n";

}