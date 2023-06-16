#include<iostream>
#include<list>
#include<vector>
using namespace std;
template<typename T>
class graph
{
    T V;
    list<T> *l;
    public:
    graph(T v)
    {
        V=v;
        // Array of Linked List
        l=new list<T>[V];
    }
    void addEdge(T u, T v, bool bidir=true)
    {
        l[u].push_back(v);
        if(bidir)
        {
            l[v].push_back(u);
        }
    }
    void prT()
    {
        for(T i=0;i<V;i++)
        {
            cout<<i<<"->";
            // l[i] is linked list
            for(T vertex:l[i])
            cout<<vertex<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    graph<int> g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.prT();
}
