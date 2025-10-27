#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int f(int m,  int n, vector<vector<int>> &grid)
    {
        vector<vector<int>> dp(m, vector<int>(n));
        int right = 101;
        int down = 101;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = grid[i][j];
                }
                else
                {
                  if (j > 0)  right = grid[i][j] + dp[i][j-1];
                  if (i > 0)  down = grid[i][j] + dp[i-1][j];
                  dp[i][j] = min(right, down);
                }
            }
        }
        return dp[m-1][n-1];
    }
    int minimumPath(int m, int n, vector<vector<int>> &grid){
        return f(m, n, grid);
    }
};
