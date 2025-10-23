#include<bits/stdc++.h>
using namespace std;

int f(int m, int n, vector<vector<int>> &grid)
{
    vector<vector<int>> dp(m, vector<int>(n));
    int right = 0;
    int down = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (grid[i][j] == -1) dp[i][j] = 0;
            else if (i == 0 && j == 0) dp[i][j] = 1;
            else {
               if(j >= 1) right = dp[i][j-1];
               if(i >= 1) down = dp[i-1][j];
                dp[i][j] = right + down;
            };
        }
    }
    return dp[m-1][n-1];
}
 
 //time complexity : O(m*n)
 //space complexity : O(m * n)
 
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
  cout << f(m, n, grid);
  return 0;
}
