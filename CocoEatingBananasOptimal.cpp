#include<bits/stdc++.h>
using namespace std;
int isPossible(int arr[], int n, int h, int m)
{
    int hoursCount = 0;
    for(int i=0;i<n;i++)
    {
        int num = arr[i];
        hoursCount += ceil(num/m);
    }
   if (hoursCount <= h) {
       return true;
   }
   else {
       return false;
   }
}

int binarySearch(int arr[], int n, int h)
{
    int low = 1;
    int high = pow(10, 9);
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPossible(arr, n, h, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}
 
int main() { 
  int n = 3, arr[] = {3, 6, 9};
  int h = 6;
  cout << binarySearch(arr,n, h);
  return 0;
}
