#include<bits/stdc++.h>
using namespace std;

int firstOccuranceOfANumber(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] >= target) {
            high = mid -1;
            ans = mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
    }
    return ans;
}
 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << firstOccuranceOfANumber(arr, n, target);
  return 0;
}
