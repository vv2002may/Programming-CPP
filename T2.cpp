class Solution
{
public:
	int countPaths(int n, vector<vector<int>> &roads)
	{
		vector<pair<int, int>> adj[n];
		for (int i = 0; i < roads.size(); i++)
		{
			adj[roads[i][0]].push_back({roads[i][1], roads[i][2]});
			adj[roads[i][1]].push_back({roads[i][0], roads[i][2]});
		}
		vector<int> distance(n, 1e15);
		vector<int> ways(n, 0);

		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

		ways[0] = 1;
		distance[0] = 0;
		pq.push({0, 0});

		while (!pq.empty())
		{
			int node = pq.top().second;
			int dis = pq.top().first;
			pq.pop();
			for (auto it : adj[node])
			{
				int adjNode = it.first;
				int edgeWght = it.second;

				// New Entry
				if (dis + edgeWght < distance[adjNode])
				{
					ways[adjNode] = ways[node];
					distance[adjNode] = dis + edgeWght;
					pq.push({dis + edgeWght, adjNode});
				}
				else if (dis + edgeWght == distance[adjNode])
				{
					ways[adjNode] = (ways[adjNode] + ways[node]) % ((int)1e9 + 7);
				}
			}
		}
		return ways[n - 1] % ((int)1e9 + 7);
	}
};