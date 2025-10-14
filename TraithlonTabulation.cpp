#include<bits/stdc++.h>
using namespace std;

int f(int i, int sport, vector<vector<int>> &arr) 
{
    int n = i+1;
    vector<vector<int>> dp(n, vector<int>(3, -1));
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    for(int i=1;i< n;i++)
    {
        dp[i][sport] = arr[i][sport] + max(dp[i-1][(sport+1)%3], dp[i-1][(sport+2)%3]); 
    }
    return dp[i][sport];
}

int training(int n, vector<vector<int>> arr) 
{
    int a = f(n-1, 0, arr);
    int b = f(n-1, 1, arr);
    int c = f(n-1, 2, arr);
    return max(a, max(b, c));    
}
 
int main() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(3)); 
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<3;j++)
      {
         cin >>  arr[i][j] ;
      }
  }
 cout << training(n, arr);
  return 0;
}
