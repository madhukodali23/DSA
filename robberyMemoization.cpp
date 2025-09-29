#include<bits/stdc++.h>
using namespace std;

int robbery(int i, int arr[], vector<int> &dp)
{
    if (i == 0) return arr[0];
    if (i == 1) return max(arr[0], arr[1]);
    if (dp[i] != -1) return dp[i];
     int pick = arr[i] + robbery(i-2, arr, dp);
     int notPick = robbery(i-1, arr, dp);
     dp[i] = max(pick, notPick);
     return dp[i];
}
 
int main() {
   int n;
   cin >> n;
   int arr[n];
   vector<int> dp(n, -1);
   for(int i=0;i<n;i++) cin >> arr[i];
   cout << robbery(n-1, arr, dp);
  return 0;
}
