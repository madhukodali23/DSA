#include<bits/stdc++.h>
using namespace std;

int minPath(int n, vector<vector<int>> &triangle)
{
    vector<vector<int>> dp(n, vector<int>(n));
    for(int i=0;i<n;i++) dp[n-1][i] = triangle[n-1][i];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            int down = triangle[i][j] +  dp[i+1][j];
            int diagonal = triangle[i][j] + dp[i+1][j+1];
            dp[i][j] = min(down, diagonal);
        }
    }
    return dp[0][0];
}
 
int main() {
  int n;
  cin >> n;
  vector<vector<int>> triangle(n);
  vector<vector<int>>dp(n, vector<int>(n, -1));
  for(int i=0;i<n;i++)
  {
      triangle[i].resize(i+1);
      for(int j=0;j<=i;j++)
      {
          cin >> triangle[i][j];
      }
  }
  cout << minPath(n, triangle);
  return 0;
}
