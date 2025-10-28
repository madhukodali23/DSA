#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, int n, vector<vector<int>> &triangle)
{
    if (i == n-1) 
    {
        return triangle[n-1][j];
    }
    int down = f(i+1, j, n, triangle);
    int diagonal = f(i+1, j+1,n, triangle);
    return triangle[i][j] + min(down, diagonal);
}
 
int main() {
  int n;
  cin >> n;
  vector<vector<int>> triangle(n);
  for(int i=0;i<n;i++)
  {
      triangle[i].resize(i+1);
      for(int j=0;j<=i;j++)
      {
          cin >> triangle[i][j];
      }
  }
  cout << f(0, 0, n, triangle);
  return 0;
}
