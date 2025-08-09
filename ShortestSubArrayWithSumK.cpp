#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int shortestSubarrayWithSumK(int arr[], int n, int k) {
        int min = INT_MAX;
        int sum = 0;
        map<int, int> m;
         for(int i=0;i<=n-1;i++) 
         {
             sum = sum + arr[i];
             if (sum == k) {
                 min = i + 1;
             }
             
             if (m.find(sum-k) != m.end())
             {
                 int len = i-m[sum-k];
                 if (len < min) min = len;
             }
             
             m[sum] = i;
         }
        if (min == INT_MAX) return -1;
    return min;
    }
};
