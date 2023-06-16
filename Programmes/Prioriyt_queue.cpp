#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    // priority_queue<int> pq;// by default it arrange in descending order[Max Heap].
    //priority_queue<int,vector<int>,____> pq(here ____ is comparator)
    //2 type of comparator : inbuilt and user defined
    priority_queue<int,vector<int>,greater<int> >pq;//arrange in ascending order[Min Heap].
    int a[]={5,7,3,8,2};
    for(int i=0;i<5;i++)
    pq.push(a[i]);
    
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}