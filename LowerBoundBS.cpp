#include<bits/stdc++.h>
using namespace std;

int lowerBoundBS(int arr[], int n, int target)
{
    int l = 0;
    int r = n-1;
    int ans = n;
    while (l <= r)
    {
        int mid = ( l + r ) / 2;
        if (arr[mid] >= target) 
        {
            r = mid - 1;
            ans = mid;
        }
        else 
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << lowerBoundBS(arr, n, target);
  return 0;
}
