#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<int>> &visited)
    {
        int m = grid.size();
        int n = grid[0].size();
        visited[i][j] = 1;
        if (i-1 >= 0 && !visited[i-1][j] && grid[i-1][j] == 'O')
        {
            dfs(i-1, j, grid, visited);
        }
        if (i + 1 < m && !visited[i+1][j] && grid[i+1][j] == 'O')
        {
            dfs(i+1, j, grid, visited);
        }
        if (j - 1 >= 0 && !visited[i][j-1] && grid[i][j-1] == 'O')
        {
            dfs(i, j-1, grid, visited);
        }
        if (j + 1 < n && !visited[i][j+1] && grid[i][j+1] == 'O')
        {
            dfs(i, j+1, grid, visited);
        }
    }

    void surroundO(vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        for(int j=0;j<n;j++)
        {
            if (grid[0][j] == 'O' && !visited[0][j])
            {
                dfs(0, j, grid, visited);
            }
            if (grid[m-1][j] == 'O' && !visited[m-1][j])
            {
                dfs(m-1, j, grid, visited);
            }
        }
        
        for(int i = 0; i< m-1;i++)
        {
            if (grid[i][0] == 'O' && !visited[i][0])
            {
                dfs(i, 0, grid, visited);
            }
            
            if (grid[i][n-1] == 'O' && !visited[i][n-1])
            {
                dfs(i, n-1, grid, visited);
            }
        }
        
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if (!visited[i][j] && grid[i][j] == 'O')
                {
                    grid[i][j] = 'X';
                }
            }
        }
    }
};
