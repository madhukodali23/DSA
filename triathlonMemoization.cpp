#include<bits/stdc++.h>
using namespace std;

int f(int i, int sport, int points[][3], vector<vector<int>> &dp)
{
    if (i < 0) 
    {
        return 0;
    }
     if (dp[i][sport] != -1) return dp[i][sport];
   return dp[i][sport] = points[i][sport] + max(f(i-1, (sport+1)%3, points, dp), f(i-1, (sport+2)%3, points, dp));
}

int training(int n, int points[][3])
{
    vector<vector<int>> dp(n, vector<int>(3, -1));
    int a = f(n-1, 0, points, dp);
    int b = f(n-1, 1, points, dp);
    int c = f(n-1, 2, points, dp);
    return max(a, max(b, c));
}
 
int main() {
  int n;
  cin >> n;
  string s;
  getline(cin, s);
  int arr[n][3];
  for(int i=0;i<n;i++) 
  {
      for(int j=0;j<3;j++)
      {
          cin >> arr[i][j];
      }
  }
  cout << training(n, arr);
  return 0;
}
