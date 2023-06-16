#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void view(vector<int> v)
{
    int n1=v.size();
    double f=log(n1);
    for(int i=0,j=0;i<=ceil(f);i++)
    {
        int p=j+pow(2,i);
        while(j<p && j<n1)
        {
            cout<<v[j]<<" ";
            j++;
        }
        cout<<endl;
    }               
}
int main()
{
    vector<int> v;
    int p1=0;
    while(true)
    {
        cout<<"1.Insert\n2.View\n3.Delete\nEnter your choice : ";
        int a;
        cin>>a;
        switch(a)
        {
            case 1:
            {
                int val;    cout<<"Enter value : ";
                cin>>val;
                v.push_back(val);
                int n=v.size();
                int temp=v[n-1];
                float i=n-1;
                while(i>0 && temp>v[ceil(i/2)-1])
                {
                    v[i]=v[ceil(i/2)-1];
                    i=ceil(i/2)-1;
                }
                v[i]=temp;
                p1=0;
                break;
            }
            case 2:
            {
                view(v);                              
                break;
            }
            case 3:
            {
                int n=v.size()-p1;
                if(n>1)
                {
                    int x,i,j;
                    x=v[0];
                    v[0]=v[n-1];
                    i=0;    j=2*i+1;
                    while(j<=n-2)
                    {
                        if(v[j+1]>v[j])
                        {
                            j++;
                        }
                        if(v[j]>v[i])
                        {
                            swap(v[i],v[j]);
                            i=j;
                            j=2*j+1;
                        }
                        else
                        break;
                    }
                    v[n-1]=x;
                }
                view(v);
                p1++;
                break;
            }
        }
        cout<<endl;
    }
}