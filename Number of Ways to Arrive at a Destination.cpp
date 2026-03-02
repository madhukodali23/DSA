#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int dijkstras(int n, vector<vector<pair<int, int>>> &adj, vector<int> &distance)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        distance[0] = 0;
        int count = 1;
        pq.push({0, 0});
        vector<int> paths(n, 0);
        paths[0] = 1; 
        while (!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            int dist = temp.first, curr = temp.second;
            for(auto k : adj[curr])
            {
                int neighbour = k.first, cost = k.second;
                if (dist + cost < distance[neighbour])
                {
                    distance[neighbour] = dist + cost;
                    pq.push({distance[neighbour], neighbour});
                    paths[neighbour] = paths[curr];
                }
                else if (dist + cost == distance[neighbour])
                {
                    paths[neighbour] += paths[curr];
                }
            }
        }
        return paths[n-1];
    }
    int numberPaths(int n, vector<vector<int>> &roads) {
        vector<int> distance(n, INT_MAX);
        vector<vector<pair<int, int>>> adj(n);
        for(int i=0;i<roads.size();i++)
        {
            int u = roads[i][0], v = roads[i][1], cost = roads[i][2];
            adj[u].push_back({v, cost});
            adj[v].push_back({u, cost});
        }
        return dijkstras(n, adj, distance);
    }
};
