#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int curr, int parent,vector<vector<int>> &bridges,  vector<vector<int>> &adj, vector<int> &visited, vector<int> &low , vector<int> &disc, int &timer)
    {
         visited[curr] = 1;
         low[curr] = timer;
         disc[curr] = timer;
         timer++;
         for(int k : adj[curr])
         {
             if (k != parent)
             {
                 if (!visited[k])
                 {
                     dfs(k, curr,bridges, adj, visited, low, disc, timer);
                     low[curr] = min(low[k], low[curr]);
                     if (low[k] > disc[curr])
                     {
                         bridges.push_back({curr, k});
                     }
                 }
                 else
                 {
                     low[curr] = min(low[k], low[curr]);
                 }
             }
         }
    }
    vector<vector<int>> findBridges(int n, vector<vector<int>>& edges){
        vector<vector<int>> adj(n);
        vector<int> visited(n, 0);
        vector<int> low(n, INT_MAX);
        vector<int> disc(n, INT_MAX);
        vector<vector<int>> bridges;
        int timer = 0;
        for(auto k : edges)
        {
            int a = k[0], b = k[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(0, -1, bridges, adj, visited, low, disc, timer);
        return bridges;
    }
};
