#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;
template<typename T>
class graph
{
    map< T,list<T> > adjlist;
    public:
    void addEdge(T u, T v, bool bidir=true)
    {
        adjlist[u].push_back(v);
        if(bidir)
        {
            adjlist[v].push_back(u);
        }
    }
    void print()
    {
        for(auto i:adjlist)
        {
            cout<<i.first<<"->";
            for(auto entry:i.second)
            {
                cout<<entry<<",";
            }
            cout<<endl;
        }
    }
    void bfs(T src)
    {
        queue<T> q;
        map<T,bool> visited;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            T node = q.front();
            cout<<node<<" ";
            q.pop();
            //check for visited node
            for(auto neighbour:adjlist[node])
            {
                if(!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
    }
};
int main()
{
    system("clear");
    graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(3,4);
    g.print();
    g.bfs(0);
}