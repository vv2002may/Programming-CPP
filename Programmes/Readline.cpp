#include<iostream>
using namespace std;
void readline(char a[],int n,char stop)
{
    int i=0;
    char ch=cin.get();
    while(ch!=stop)
    {
        a[i]=ch;
        i++;
        if(i==n-1)
        break;
        ch=cin.get();
    }
    a[i]='\0';
}
int main()
{
    system("clear");
    char a[100];
    //readline(a,100,'$');
    cin.getline(a,100);//Built in function
    cout<<a<<endl; 
    cin.getline(a,100,'$');
    cout<<a<<endl;
}