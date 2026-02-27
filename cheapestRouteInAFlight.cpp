#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    void dijkstras(int n, vector<vector<pair<int, int>>> &adj, vector<int>&distance, int start, int end, int s)
    {
        queue<pair<int, pair<int, int>>> q;
        q.push({1, {0, start}});
        distance[start] = 0;
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int steps = temp.first, dist = temp.second.first, curr = temp.second.second;
            for(auto k : adj[curr])
            {
                int neighbour = k.first, cost = k.second; 
                if (dist + cost < distance[neighbour] && steps <= s+1)
                {
                    distance[neighbour] = dist + cost;
                    q.push({steps+1, {distance[neighbour], neighbour}});
                }
            }
        }
    }
    int cheapestFlight(int n, vector<vector<int>>& flights, int start, int end, int k) {
        vector<vector<pair<int, int>>> adj(n);
        vector<int> distance(n, INT_MAX);
        for(int i = 0; i < flights.size(); i++)
        {
            int from = flights[i][0];
            int to = flights[i][1];
            int cost = flights[i][2];
            adj[from].push_back({to, cost});
        }
        dijkstras(n, adj, distance, start, end, k);
        if (distance[end] == INT_MAX) return -1;
        return distance[end];
    }
};
