#include<iostream>
using namespace std;
int main()
{
    system("clear");
    int **p,r,c;
    cin>>r>>c;
    p=new int *[r];

    for(int i=0;i<r;i++)
    {
        p[i]=new int [c];//initialise with 0;//c can be variable
        for(int j=0;j<c;j++)
        cin>>p[i][j];//cin>>*(*(p+i)+j);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<p[i][j]<<" ";
        cout<<endl;
    }
}