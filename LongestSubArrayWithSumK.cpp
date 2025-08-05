#include<bits/stdc++.h>
using namespace std;

void longestSubArrayWithSumK(int arr[], int n, int k)
{
    map<int, int> mp;
    int sum = 0;
    int max = 0;
    for(int i=0;i<=n-1;i++) 
    {
         sum = sum + arr[i];
         if (sum == k) max = i + 1;
         if (mp.find(sum-k) != mp.end())
         {
             int len = i-mp[sum-k] ;
             if (len > max) max = len;
         }
         if (mp.find(sum) == mp.end()) mp[sum] = i ;
    }
    cout << max << endl;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  longestSubArrayWithSumK(arr, n, k);
  return 0;
}
