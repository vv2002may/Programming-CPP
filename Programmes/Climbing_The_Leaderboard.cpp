#include<iostream>
#include<vector>
using namespace std;
int main()
{
system("clear");
vector <int> a,b,a1;

int n;  cin>>n;
for(int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    a.push_back(temp);
}
int c=a[0];
for(int i=1;i<=n;i++)
{
    if(c!=a[i])
    {
        a1.push_back(c);
    }
    c=a[i];
}
n=a1.size();

int m;  cin >> m;
for (int i = 0; i < m; i++)
{
    int temp;
    cin >> temp;
    b.push_back(temp);
}
// for (int i = 0; i < n; i++)
// {
//     cout << a1[i] << " ";
// }
// cout<<endl;
/*for(int j=0;j<m;j++)
{
    int y = n;
    for (int i = 0; i < n; i++)
    {
        if (b[j] >= a1[i])
        {
            y = i;
            break;
        }
    }
    cout << (y + 1) << endl;
}*/
for(int j=0;j<m;j++)
{
    //int key;    cin>>key;
    float mid;
    int s=0,e=n-1,y=0,p=0;
    //cout<<key<<endl;
    while(s<=e)
    {
        mid = (float)(s+e)/2;
        //cout<<mid<<endl;
        if(mid>int(mid))
        mid=int(mid)+1;
        //cout<<mid<<endl;
        if(b[j]==a1[mid])
        {
            break;
        }
        else if(b[j]<a1[mid])
        s=mid;
        else
        e=mid;
        
        p++;
        if(p>n/2)
        break;
    }
        cout<<"s = "<<s<<"  e = "<<e<<endl;
        cout<<"n & mid : "<<n<<mid<<endl;
        cout<<j+1<<"    :   ";
        if(s==0 && (e==1 || e==0))
        {
            if(b[j]>=a1[0])
            cout<<e<<endl;
            else 
            cout<<(e+1)<<endl;
        }
        else if(s==n-1 && e==n-1)
        cout<<(e+2)<<endl;
        else
        cout<<(e+1)<<endl;
}
}