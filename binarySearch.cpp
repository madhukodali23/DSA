#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int l = 0;
    int r = n-1;
    while (l <= r)
    {
        int mid = (l + r)/2;
        if (arr[mid] == target) return mid;
        else if (target > arr[mid]) l = mid + 1;
        else r = mid -1;
    }
    return -1;
}
 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << binarySearch(arr, n, target);
  return 0;
}
