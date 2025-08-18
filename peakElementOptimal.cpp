#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int findPeakElement(int arr[], int n) {
      int low = 0;
      int high = n-1;
          if (n == 1) 
          {
              return 0;
          }
         else if (arr[n-1] > arr[n-2])
          {
              return n-1;
          }
         else if (arr[0] > arr[1])
         {
             return 0;
         }else 
         {
             while (low <= high)
             {
                 int mid = low + (high-low)/2;
                 if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
                 {
                     return mid;
                 }
                 else if (arr[mid] < arr[mid+1])
                 {
                     low = mid + 1;
                 }
                 else 
                 {
                     high = mid - 1;
                 }
             }
         }
         return 0;
    }
};
