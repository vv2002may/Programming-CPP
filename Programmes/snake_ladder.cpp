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
    int bfs(T src,T dest)
    {
        queue<T> q;
        map<T,T> dist;
        map<T,T> parent;
        for(auto i:adjlist)
        {
            dist[i.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        parent[src]=src;
        while(!q.empty())
        {
            T node = q.front();
            // cout<<node<<" ";
            q.pop();
            //check for visited node
            for(auto neighbour:adjlist[node])
            {
                if(dist[neighbour]==INT_MAX)
                {
                    q.push(neighbour);
                    dist[neighbour]=dist[node]+1;
                    parent[neighbour]=node;
                }
            }
        }
        // for(auto i : adjlist)
        // {
        //     T node =i.first;
        //     cout<<"\nDist of "<<node<<" is "<<dist[node];
        // }
        T temp = dest;
        while(temp!=src)
        {
            cout<<temp<<"-->";
            temp=parent[temp];
        }
        cout<<src<<endl;
        return dist[dest];
    }
};
int main()
{
    system("clear");
    graph<int> g;
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=-10;
    board[32]=-2;
    board[34]=-22;
    for(int u=0;u<37;u++)
    {
        for(int dice=1;dice<=6;dice++)
        {
            int v = u + dice + board[u+dice];
            g.addEdge(u,v,false);
        }
    }
    int value = g.bfs(1,36);
    cout<<"\nShortest Dist : "<<value<<endl;
    return 0;
}