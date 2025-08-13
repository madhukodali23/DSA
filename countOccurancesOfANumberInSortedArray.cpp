#include<bits/stdc++.h>
using namespace std;

int findFirstOccurance(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
           low = mid + 1;
        }
    }
    return ans;
}


int findLastOccurance(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid] <= target) {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
           high = mid - 1;
        }
    }
    return ans;
}
 
int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for(int i=0;i<=n-1;i++) cin >> arr[i];
  int i = findFirstOccurance(arr, n, target);
  if (i == -1) {
      cout << 0;
  }else
  {
        int j =  findLastOccurance(arr, n, target);
        cout << j - i + 1;
  }
  return 0;
}
