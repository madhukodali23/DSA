#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int minRotations(int arr[], int n){
       int low = 0;
       int high = n-1;
       int ans = INT_MAX;
       int ansIndex = -1;
       while (low <= high)
       {
           int mid = low + (high-low)/2;
           if (arr[low] <= arr[mid])
           {
               if (arr[low] < ans)
               {
                   ans = arr[low];
                   ansIndex = low;
               }
               low = mid + 1;
           }else if (arr[mid] <= arr[high])
           {
               if (arr[mid] < ans)
               {
                   ans = arr[mid];
                   ansIndex = mid;
               }
               high = mid - 1;
           }
       }
       return ansIndex;
    }
};
