#include<bits/stdc++.h>
using namespace std;

int climbing_stairs(vector<int> &dp, int i)
{
    if (i == 1) return 1;
    if (i == 0) return 1;
    
    if (dp[i] != -1) return dp[i];
    int left = climbing_stairs(dp, i-1);
    int right = climbing_stairs(dp, i-2);
    dp[i] = left + right;
    return dp[i];
}
 
int main() {
  int n;
  cin >> n;
  vector<int> dp(n+1, -1);
  cout << climbing_stairs(dp, n);
  return 0;
}
