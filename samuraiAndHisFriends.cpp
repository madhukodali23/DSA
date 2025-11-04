#include<bits/stdc++.h>
using namespace std;

int f(int i, int j1, int j2,int m, int n, vector<vector<int>> grid,  vector<vector<vector<int>>> &dp)
{
    
      if (j1 < 0 || j2 < 0 || j1 > n-1 || j2 > n-1)
      {
          return INT_MIN;
      }
      
      if (i == m-1)
      {
          if (j1 == j2) return grid[i][j1];
          else return grid[i][j1] + grid[i][j2];
      }
    
      if (dp[i][j1][j2] != -1) return dp[i][j1][j2];
       int gridValue;
       if (j1 != j2) 
       {
            gridValue = grid[i][j1] + grid[i][j2];
       }
       else
       {
           gridValue = grid[i][j1];
       }
       vector<int> temp(9);
       temp[0] = f(i+1, j1-1, j2-1, m,  n, grid,dp);
       temp[1] = f(i+1, j1-1, j2, m,  n, grid,dp);
       temp[2] = f(i+1, j1-1, j2+1, m,  n, grid,dp);
       temp[3] = f(i+1, j1, j2-1, m,  n, grid,dp);
       temp[5] = f(i+1, j1, j2, m,  n, grid,dp);
       temp[4] = f(i+1, j1, j2+1, m,  n, grid,dp);
       temp[6] = f(i+1, j1+1, j2-1, m,  n, grid,dp);
       temp[7] = f(i+1, j1+1, j2, m,  n, grid,dp);
       temp[8] = f(i+1, j1+1, j2+1, m,  n, grid,dp);
       return dp[i][j1][j2] = gridValue + *max_element(temp.begin(), temp.end());
}
 
int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>> grid(m, vector<int>(n));
  vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin >> grid[i][j];
      }
  }
  cout << f(0, 0, n-1, m, n, grid, dp);
  return 0;
}
