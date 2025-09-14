#include<bits/stdc++.h>
using namespace std;


int print_subsequence(int arr[], int n, int k, int i, int sum)
{
    if (i >= n)
    {
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }
    
    sum += arr[i];
    int left = print_subsequence(arr, n, k, i+1, sum);
    
    sum -= arr[i];
    int right = print_subsequence(arr, n, k, i+1,sum);
    
    return left + right;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin >> arr[i];
  }
  cout << print_subsequence(arr, n, k, 0, 0);
  return 0;
}
