#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> bfs(vector<vector<int>> &grid, queue<pair<pair<int, int>,int>> q, vector<vector<int>>ans)
{
    int m = grid.size();
    int n = grid[0].size();
    while (!q.empty())
    {
        pair<pair<int, int>,int> temp = q.front();
        int i = temp.first.first, j = temp.first.second, dist = temp.second;
        q.pop();
        if (i + 1 < m && ans[i+1][j] == -1)
        {
            q.push({{i+1, j}, dist+1});
            ans[i+1][j] = dist+1;
        }
        if (i-1 >= 0 && ans[i-1][j] == -1)
        {
            q.push({{i-1, j}, dist+1});
            ans[i-1][j] = dist+1;
        }
        if (j-1 >= 0 && ans[i][j-1] == -1)
        {
            q.push({{i, j-1}, dist+1});
            ans[i][j-1] = dist+1;
        }
        if (j+1 < n && ans[i][j+1] == -1)
        {
            q.push({{i, j+1}, dist+1});
            ans[i][j+1] = dist+1;
        }
    }
    return ans;
}

vector<vector<int>> nearZeros(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
     queue<pair<pair<int, int>,int>> q;
     vector<vector<int>>ans(m, vector<int>(n, -1));
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             if (grid[i][j] == 0)
             {
                 q.push({{i, j}, 0});
                 ans[i][j] = 0;
             }
         }
     }
     return bfs(grid, q, ans);
}
 
int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>>grid(m, vector<int>(n));
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin >> grid[i][j];
      }
  }
  vector<vector<int>> ans = nearZeros(grid);
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout << ans[i][j] << " ";
      }
      cout << endl;
  }
  return 0;
}
