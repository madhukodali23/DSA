#include<bits/stdc++.h>
using namespace std;

int minPath(int n, vector<vector<int>> &triangle)
{
    vector<int> curr(n);
    vector<int> prev(n);
    for(int i=0;i<n;i++) prev[i] = triangle[n-1][i];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            int down = triangle[i][j] +  prev[j];
            int diagonal = triangle[i][j] + prev[j+1];
            curr[j] = min(down, diagonal);
        }
        prev = curr;
    }
    return curr[0];
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
