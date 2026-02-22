#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int start, vector<vector<pair<int,int>>> &adj, stack<int> &st, vector<int> &visited)
    {
        visited[start] = 1;
        for(auto k : adj[start])
        {
            if (!visited[k.first])
            {
                dfs(k.first, adj, st, visited);
            }
        }
        st.push(start);
    }
    vector<int> shortestPath(int n, int e, vector<vector<int>>& edges) {
        stack<int> st;
        vector<int> visited(n, 0);
        vector<vector<pair<int,int>>> adj(n);
        vector<int> ans(n, INT_MAX);
        for(int i = 0; i < e; i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            int weight = edges[i][2];
            adj[a].push_back({b, weight});
        }
        
        dfs(0, adj, st, visited);
        
        ans[0] = 0;
        while (!st.empty())
        {
            int curr = st.top();
            for(auto k : adj[curr])
            {
               int weight = k.second;
               int neighbour = k.first;
               if (ans[curr] + weight < ans[neighbour])
               {
                   ans[neighbour] =  ans[curr] + weight;
               }
            }
            st.pop();
        }
        for(int i = 0; i < n; i++) 
        {
            if (ans[i] == INT_MAX) ans[i] = -1;
        }
        return ans;
    }
};
