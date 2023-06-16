#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

system("clear");
    int n;
    cin>>n;
    string *a,*b;
    a=new string[n];
    b=new string[n];
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    
    string *c;
    c=new string;
    while(cin>>*c)
    {
        for(int i=0;i<n/4;i++)
        {
            if(*c==a[i])
            {
                cout<<a[i]<<"="<<b[i]<<endl;
                break;
            }
            else if(i==n/4)
            {
                for(int j=i;j<n/2;j++)
                {
                    if(*c==a[j])
                    {
                        cout<<a[j]<<" "<<b[j]<<endl;
                        break;
                    }
                    else if(j==n/2)
                    {
                        for(int k=j;k<n;k++)
                        {
                            if(*c==a[k])
                            {
                                cout<<a[k]<<" "<<b[k]<<endl;
                                break;
                            }
                            else if(k==n)
                            cout<<"Not found\n";
                        }
                    }
                }
            }
        }
    }
  
    return 0;
}
