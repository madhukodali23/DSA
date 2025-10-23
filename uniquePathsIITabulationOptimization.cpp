#include<bits/stdc++.h>
using namespace std;

int f(int m, int n, vector<vector<int>> &grid)
{
    int prev[n];
    int curr[n];
    int right = 0;
    int down = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (grid[i][j] == -1) curr[j] = 0;
            else if (i == 0 && j == 0) curr[j] = 1;
            else {
               if(j >= 1) right = curr[j-1];
               if(i >= 1) down = prev[j];
                curr[j] = right + down;
            };
        }
        for(int j=0;j<n;j++) prev[j] = curr[j];
    }
    return curr[n-1];
}
 
 //time complexity : O(m*n)
 //space complexity : O(min(m,n))
 
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
