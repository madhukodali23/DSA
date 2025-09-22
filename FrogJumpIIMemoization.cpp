#include<bits/stdc++.h>
using namespace std;

int frogJumpII(int heights[], int i, int k, vector<int> &dp) 
{
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];
    int minimumEnergy = INT_MAX;
    int energy;
    for(int j=1;j<=k;j++)
    {
         if (i - j >= 0) 
         { 
         energy = abs(heights[i] - heights[i-j]) + f(heights, i-j, k, dp);
         minimumEnergy = min(energy, minimumEnergy);
         }
    }
    return dp[i] = minimumEnergy;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  vector<int> dp(n, -1);
  for(int i=0;i<n;i++) 
  {
      cin >> arr[i];
  }
  cout << f(arr, n-1, k, dp);
  return 0;
}
