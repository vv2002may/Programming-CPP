// Functor : functional objects
#include<iostream>
#include<queue>
using namespace std;
class car
{
    public:
        int x,y,id;
        car(int x,int y,int id)
        {
            this->x=x;
            this->y=y;
            this->id=id;
        }
        int dist()
        {
            return (x*x + y*y);
        }
        void print()
        {
            cout<<"ID : "<<id<<endl;
            cout<<"Location : "<<x<<","<<y<<endl;
        }
};
class compare
{
    public:
        bool operator()(car a, car b)
        {
            return a.dist() > b.dist();
        }
};
int main()
{
    priority_queue<car,vector<car>,compare> pq;
    int n;  cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        car c(x[i],y[i],i+1);
        pq.push(c);
    }
    while(!pq.empty())
    {
        car c=pq.top();
        pq.pop();
        c.print();
    }

}