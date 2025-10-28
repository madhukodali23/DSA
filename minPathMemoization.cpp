#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, int n, vector<vector<int>> &triangle, vector<vector<int>> &dp)
{
    if (i == n-1) 
    {
        return triangle[n-1][j];
    }
    if (dp[i][j] != -1) return dp[i][j];
    int down = f(i+1, j, n, triangle, dp);
    int diagonal = f(i+1, j+1,n, triangle, dp);
    return dp[i][j] = triangle[i][j] + min(down, diagonal);
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
  cout << f(0, 0, n, triangle, dp);
  return 0;
}
