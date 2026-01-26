#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void dfs(int i, int j, int r, int c, vector<vector<int>> &grid, vector<vector<int>> &visited)
    {
        visited[i][j] = 1;
        if (i+1 < r && !visited[i+1][j] && grid[i+1][j]) dfs(i+1, j,r, c, grid, visited);
        if (i-1 >= 0 && !visited[i-1][j] && grid[i-1][j]) dfs(i-1, j,r, c,  grid, visited);
        if (j+1 < c  && !visited[i][j+1] && grid[i][j+1]) dfs(i, j+1, r, c, grid, visited);
        if (j-1 >= 0 && !visited[i][j-1] && grid[i][j-1]) dfs(i, j-1, r, c, grid, visited);
    }
    int numOfIslands(vector<vector<int>>& grid){
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;
        vector<vector<int>> visited(r, vector<int>(c, 0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if (!visited[i][j] && grid[i][j])
                {
                    dfs(i, j, r, c, grid, visited);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
