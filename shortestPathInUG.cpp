#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bfs(int start, vector<vector<int>> &adj,  vector<int> &visited, vector<int> &ans)
    {
        queue<pair<int,int>> q;
        q.push({start, 0});
        visited[start] = 1;
        while (!q.empty())
        {
            pair<int, int> temp = q.front();
            q.pop();
            int node =  temp.first;
            int weight = temp.second;
            ans[node] = weight;
            for(int k : adj[node])
            {
                if (!visited[k])
                {
                    q.push({k, weight+1});
                    visited[k] = 1;
                }
            }
        }
    }
    vector<int> shortestPath(int n, int e, vector<vector<int>>& edges, int start) {
        vector<vector<int>> adj(n);
        vector<int> visited(n, 0);
        vector<int> ans(n, -1);
        for(int i = 0; i < e; i++)
        {
            int f = edges[i][0];
            int t = edges[i][1];
            adj[f].push_back(t);
            adj[t].push_back(f);
        }
        bfs(start, adj, visited, ans);
        return ans;
    }
};
