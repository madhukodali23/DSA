#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        int firstSmallest = arr[0];
        int secondSmallest = INT_MAX;
       for(int i=1;i<=n-1;i++)
       {
           if (arr[i] < firstSmallest) {
               secondSmallest = firstSmallest;
               firstSmallest = arr[i];
           }
           if (arr[i] < secondSmallest && arr[i] > firstSmallest)
           {
               secondSmallest = arr[i];
           }
       }
       return secondSmallest;
    }
};
