#include<iostream>
using namespace std;
/*void rmdup(char a[])
{
    int j,n=strlen(a);
    for(int i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                break;
            } 
        } 
        int l=j,k=i+1;
        for(int k=i+1;j<n;k++,j++)
        {
            a[k]=a[j];
        }
        while(k<l)
        {
            n--;
            k++;
        }
        a[n]='\0';
    }
    
}
int main()
{
    system("clear");
    char a[100];
    cin.getline(a,100);
    rmdup(a);
    cout<<a<<endl;
}*/

//Better Way

void rmdup(char a[])
{
    int l=strlen(a);
    if(l==1)
    return;
    int prev=0;
    for(int cur=1;cur<l;cur++)
    {
        if(a[cur]!=a[prev])
        {
            prev++;
            a[prev]=a[cur];
        }
    }
    a[prev+1]='\0';
}
int main()
{
    system("clear");
    char a[100];
    cin.get(a,100);
    rmdup(a);
    cout<<a<<endl;
}