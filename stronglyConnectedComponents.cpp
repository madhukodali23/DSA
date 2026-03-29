#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    void dfs(int curr, vector<vector<int>>&adj, stack<int> &st, vector<int> &visited)
    {
        visited[curr] = 1;
        for(int k : adj[curr])
        {
            if (!visited[k])
            {
                dfs(k, adj, st, visited);
            }
        }
        st.push(curr);
    }

    void dfs2(int curr, vector<vector<int>>&adjR, vector<int> &visited)
    {
        visited[curr] = 1;
        for(int k : adjR[curr])
        {
            if (!visited[k])
            {
                dfs2(k, adjR, visited);
            }
        }
    }

    int stronglyConnectedComponents(int n, vector<vector<int>>& adj) {
        vector<int> visited(n, 0);
        stack<int> st;
        
        for(int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i, adj, st, visited);
            }
        }
        
         vector<vector<int>> adjR(n);
         for(int i = 0; i < n; i++)
         {
             visited[i] = 0;
             for(int k : adj[i])
             {
                 adjR[k].push_back(i);
             } 
         }
         
         
         int count = 0;
         while (!st.empty())
         {
             int temp = st.top();
             st.pop();
             if (!visited[temp])
             {
                 count++;
                 dfs2(temp, adjR, visited);
             }
         }
         return count;
    } 
};
