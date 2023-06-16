#include<iostream>
using namespace std;
int main()
{
     system("clear");
     int m,n;
     cin>>m>>n;
     int a[m][n],p=11;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=p;
            p++;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    // int i=0,j=0,k=0,l=m*n;
    // while(1)
    // {
    //     if(k==l)
    //     break;
    //     while(j<n)
    //     {
    //         cout<<a[i][j]<<" ";
    //         j++;
    //         k++;
    //     }
    //     j--;
    //     i++;
    //     if(k==l)
    //     break;
    //     while(i<m)
    //     {
    //         cout<<a[i][j]<<" ";
    //         i++;
    //         k++;
    //     }
    //     i--;
    //     j--;
    //     if(k==l)
    //     break;
    //     while(j>0)
    //     {
    //         cout<<a[i][j]<<" ";
    //         j--;
    //         k++;
    //     }
    //     if(k==l)
    //     break;
    //     while(i>0)
    //     {
    //         cout<<a[i][j]<<" ";
    //         i--;
    //         k++;
    //     }
    //     i++;    j++;    n--;    m--;
    // }
    // cout<<endl;

    //Better way;
    int startRow=0;
    int startCol=0;
    int endRow=m-1;//3
    int endCol=n-1;//4
    while(startRow<=endRow && startCol<=endCol)
    {
        for(int i=startCol; i<=endCol; i++)
            cout<<a[startRow][i]<<" ";
        startRow++;

        for(int i=startRow;i<=endRow; i++)
            cout<<a[i][endCol]<<" ";
        endCol--;

        for(int i=endCol; i>=startCol;i--)
            cout<<a[endRow][i]<<" ";
        endRow--;

        for(int i=endRow;i>=startRow;i--)
            cout<<a[i][startCol]<<" ";
        startCol++;
    }
}