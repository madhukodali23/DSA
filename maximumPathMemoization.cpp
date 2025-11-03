#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
     if (j < 0 || j >= n) return INT_MIN;
     if (i == m-1) return grid[i][j];
     if (dp[i][j] != -1) return dp[i][j];
     int down = f(i+1, j, m, n, grid, dp);
     int diagonalLeft = f(i+1, j-1, m, n, grid, dp);
     int diagonalRight = f(i+1, j+1, m, n, grid, dp);
     return dp[i][j] =  grid[i][j] + max(down, max(diagonalRight, diagonalLeft));
}

int maximumPath(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    int ans = INT_MIN; 
    for(int i=0;i<n;i++) ans =  max(ans, f(0, i, m, n, grid, dp));
    return ans;
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
  cout << maximumPath(m, n, grid);
  return 0;
}
