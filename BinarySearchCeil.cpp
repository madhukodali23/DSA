#include<bits/stdc++.h>
using namespace std;

int binarySearchCeil(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int ceilAns = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target) {
            ceilAns = arr[mid];
            high = mid - 1;
        }else 
        {
            low = mid + 1;
        }
    }
     return ceilAns;
}
 
int main() { 
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i=0;i<=n-1;i++) cin  >> arr[i];
    cout << binarySearchCeil(arr, n, target);
  return 0;
}
