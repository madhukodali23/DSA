#include<bits/stdc++.h>
using namespace std;

int binarySearchFloor(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;
    int floorAns = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= target) {
            floorAns = arr[mid];
            low = mid + 1;
        }else 
        {
            high = mid - 1;
        }
    }
     return floorAns;
}
 
int main() { 
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i=0;i<=n-1;i++) cin  >> arr[i];
    cout << binarySearchFloor(arr, n, target);
  return 0;
}
