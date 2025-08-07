#include<bits/stdc++.h>
using namespace std;

int sumOfLongestSubArrayWithSumK(int arr[], int n, int k)
{
    int i=0, j=0;
    int max = 0, sum = arr[0];
    while (j < n) 
    {
        if (sum == k) 
        {
            if (j-i+1 > max) 
            {
                max = j-i+1;
            }
            j++;
            if (j < n) sum = sum + arr[j];
        }
        
        else if (sum > k)
        {
          if (i == j) {
              i++;
              j++;
              if (j < n) sum = arr[j];
          }
          sum = sum - arr[i];
          i++;
        }
        
        else if (sum < k)
        {
            j++;
            if (j < n) sum = sum + arr[j];
        }
    }
    return max;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << sumOfLongestSubArrayWithSumK(arr, n, k);
  return 0;
}
