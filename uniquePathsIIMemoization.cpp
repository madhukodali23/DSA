#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<vector<int>> grid, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0) return 0;
    
    if (grid[i][j] == -1 || grid[0][0] == -1) return 0;
    
    if (i == 0 && j == 0) return 1;
    
    if (dp[i][j] != -1) return dp[i][j];
    
    int right = f(i, j-1, grid, dp);
    int down = f(i-1, j, grid, dp);
    return dp[i][j] = right + down;
}
 
int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>> arr(m, vector<int>(n));
  vector<vector<int>> dp(m, vector<int>(n, -1));
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin >> arr[i][j];
      }
  }
  cout << f(m-1, n-1, arr, dp);
  return 0;
}
