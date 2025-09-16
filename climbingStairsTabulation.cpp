#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(vector<int> &dp, int n)
{
    if (n == 1) return 1;
    if (n == 0) return 1;
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
 
int main() {
  int n;
  cin >> n;
  vector<int> dp(n+1, -1);
  cout << climbing_stairs(dp, n);
  return 0;
}
