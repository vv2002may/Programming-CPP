//For sorted array
#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }

    int key;
    cin>>key;

    int i=0,j=n-1;
    while(i<m && j>=0)
    {
        if(a[i][j]==key)
        {
            printf("(%d,%d)\n",i,j);
            exit(0);
        }
        else if(key>a[i][j])
        i++;
        else
        j--;
    }
    cout<<"Not Found\n";
}