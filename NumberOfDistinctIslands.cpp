#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int i,int j, vector<vector<int>>& grid, vector<vector<int>>& visited, vector<pair<int, int>> &v, pair<int, int> &start)
    {
        int m = grid.size(), n = grid[0].size();
        visited[i][j] = 1;
        v.push_back({i-start.first, j-start.second});
        if (i-1 >= 0 && !visited[i-1][j] && grid[i-1][j])
        {
            dfs(i-1, j, grid, visited, v,start);
        }
        if (i + 1 < m && !visited[i+1][j] && grid[i+1][j])
        {
            dfs(i+1, j, grid, visited, v,start);
        }
        if (j-1 >= 0 && !visited[i][j-1] && grid[i][j-1])
        {
            dfs(i, j-1, grid, visited, v, start);
        }
        if (j+1 < n && !visited[i][j+1] && grid[i][j+1])
        {
            dfs(i, j+1, grid, visited, v,start);
        }
    }
    int distinctIslands(vector<vector<int>>& grid){
       set<vector<pair<int, int>>> s;
       int m = grid.size(), n = grid[0].size();
       vector<vector<int>>visited(m, vector<int>(n, 0));
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if (!visited[i][j] && grid[i][j])
               {
                   vector<pair<int, int>> v;
                   pair<int, int> start = {i, j};
                   dfs(i, j, grid, visited, v, start);
                   s.insert(v);
               }
           }
       }
       return s.size();
    }
};
