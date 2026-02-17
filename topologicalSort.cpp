#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void dfs(int start, vector<vector<int>> &adj, vector<int> &visited, stack<int> &st)
    {
        visited[start] = 1;
        for(int k : adj[start])
        {
            if (!visited[k])
            {
                dfs(k, adj, visited, st);
            }
        }
        st.push(start);
    }
    vector<int> topologicalSort(vector<vector<int>> adj) {
        int n = adj.size();
        vector<int> visited(n);
        stack<int> st;
        vector<int> ans;
        for(int i = 0; i< n;i++)
        {
            if (!visited[i])
            {
                dfs(i, adj, visited,st);
            }
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
