#include<bits/stdc++.h>
using namespace std;

int maxPath(int m, int n, vector<vector<int>> &grid)
{
    int ans = INT_MIN;
    vector<int> prev(n);
    vector<int> curr(n);
    for(int i=m-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if (i == m-1)
            {
                curr[j] = grid[i][j];
            }
            else 
            {
                int leftDiagonal = INT_MIN;
                int rightDiagonal = INT_MIN;
                if (j >= 1)   leftDiagonal = prev[j-1];
                int down = prev[j];
                if (j <= n-2)  rightDiagonal = prev[j+1];
                curr[j] = grid[i][j] + max(down, max(leftDiagonal, rightDiagonal));
            }
       }
        prev = curr;
    }
     return *max_element(prev.begin(), prev.end());
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
  cout << maxPath(m, n, grid);
  return 0;
}
