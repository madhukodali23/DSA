#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool dfs(int start, vector<vector<int>>& adj, vector<int> &visited, vector<int> &path) {
        visited[start] = 1;
        path[start] = 1;
        for(int k : adj[start])
        {
            if (!visited[k])
            {
               if ( dfs(k, adj, visited, path)) return true;
            }
            if (visited[k] && path[k]) 
            {
                return true;
            }
        }
        path[start] = 0;
        return false;
    }
    bool cycle(vector<vector<int>>& adj, int n) {
        vector<int> visited(n, 0);
        vector<int> path(n, 0);
        for(int k = 0; k < n ; k++)
        {
            if (!visited[k])
            {
                if (dfs(k, adj, visited, path)) return true;
            }
        }
        return false;
    }
};
