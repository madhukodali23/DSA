#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int left, int right, int n, int target)
{
   if (left > right) return -1;
   int mid = (left + right) / 2;
   if (arr[mid] == target) return mid;
   else if (target > arr[mid]) return binarySearch(arr, mid + 1, right, n, target);
   else return binarySearch(arr, left, mid-1, n, target);
}
 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << binarySearch(arr,0, n-1, n, target);
  return 0;
}
