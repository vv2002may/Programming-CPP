#include<iostream>
using namespace std;
int main()
{
    int n;
    //1
    n=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
    //2
    cout<<endl;
    n=1;
    for(int i=3-1;i>=0;i--)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i)
                cout<<" ";
            else
            {
                cout<<n<<" ";
                n++;
            }
        }
        cout<<endl;
    }
    
    //3
    cout<<endl;
    n=1;
    for(int i=3-1;i>=0;i--)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i)
                cout<<"  ";
            else
            {
                cout<<n<<" ";
                n++;
            }
        }
        cout<<endl;
    }
    
    //4
    cout<<endl;
    n=1;
    for(int i=4-1;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
    //5
    cout<<endl;
    n=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<n<<" ";
                n++;
            }
        }
        cout<<endl;
    }
    
    //6
    cout<<endl;
    n=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<n<<" ";
                n++;
            }
        }
        cout<<endl;
    }
    //7
    cout<<endl;
    n=1;
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<=i;j++)
            {
                    cout<<n<<" ";
                    n++;
            }
        cout<<endl;
    }
    for(int i=2;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    //8
    cout<<endl;
    cout<<"Enter Number Of Row : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((i%2==0)&&(j%2==0))
            cout<<1;
            else if((i%2!=0)&&(j%2!=0))
            cout<<1;
            else
            cout<<0;
        }
        cout<<endl;
    }   
    /*
    for(int i=0;i<n;i++)
    {
        int val=i%2!=0?1:0;
        for(int j=0;j<=i;j++)
        {
            cout<<val;
            val=1-val;
        }
        cout<<endl;
    }
    */
    
}
