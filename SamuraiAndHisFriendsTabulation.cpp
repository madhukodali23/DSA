#include<bits/stdc++.h>
using namespace std;

int f(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(n)));

    for(int i=m-1;i >= 0;i--)
    {
        for(int j1=0;j1<n;j1++)
        {
            for(int j2=0;j2<n;j2++)
            {
                if (i == m-1)
                {
                    if (j1 == j2) dp[i][j1][j2] = grid[i][j1];
                    else dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
                }
                else
                {
                   vector<int> temp(9, INT_MIN);
                   int gridValue;
                   if (j1 != j2) 
                   {
                        gridValue = grid[i][j1] + grid[i][j2];
                   }
                   else
                   {
                       gridValue = grid[i][j1];
                   }
                   if (j1 > 0 && j2 > 0) temp[0] = dp[i+1][j1-1][j2-1];
                   if (j1 > 0 ) temp[1] = dp[i+1][j1-1][j2];
                   if (j1 > 0 && j2 < n-1) temp[2] = dp[i+1][j1-1][j2+1];
                   if (j2 > 0)  temp[3] = dp[i+1][j1][j2-1];
                    temp[4] = dp[i+1][j1][j2];
                  if (j2 < n-1)  temp[5] = dp[i+1][j1][j2+1];
                  if (j2 > 0 && j1 < n-1)  temp[6] = dp[i+1][j1+1][j2-1];
                  if (j1 < n-1)  temp[7] = dp[i+1][j1+1][j2];
                  if (j1 < n-1 && j2 < n-1)  temp[8] = dp[i+1][j1+1][j2+1];
                    dp[i][j1][j2] = *max_element(temp.begin(), temp.end()) + gridValue;
                }
            }
        }
    }
    return dp[0][0][n-1];
}
 
int main() {
  int m, n;
  cin >> m >> n;
  vector<vector<int>> grid(m, vector<int>(n));
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          cin >> grid[i][j];
      }
  }
  cout << f(m, n, grid);
  return 0;
}
