#include<bits/stdc++.h>
using namespace std;

bool searchInDuplicateSortedArray(int arr[], int n,int target)
{
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high -1;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] <= arr[high])
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
    }
    return false;
}

 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  cout << searchInDuplicateSortedArray(arr, n, target);
  return 0;
}
