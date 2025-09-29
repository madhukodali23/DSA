#include<bits/stdc++.h>
using namespace std;

int robbery(int i, int arr[])
{
    if (i == 0) return arr[0];
    if (i == 1) return max(arr[0], arr[1]);
    vector<int> dp(i+1);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for(int j=2;j<=i;j++)
    {
        int pick = arr[j] + dp[j-2];
        int notPick = dp[j-1];
        dp[j] = max(pick, notPick);
    }
    return dp[i];
}

//Time Complexity: O(n)
//Space Complexity: O(n)
 
int main() {
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i];
   cout << robbery(n-1, arr);
  return 0;
}
