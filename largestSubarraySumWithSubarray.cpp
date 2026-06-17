#include<bits/stdc++.h>
using namespace std;

void largestSubarraySum(vector<int>& arr) {
         int n = arr.size();
         int sum = 0;
         int maxSum = INT_MIN;
         int left, right;
         
         for(int i = 0; i < n; i++)
         {
             if (sum < 0) 
             {
                 sum = 0;
                 left = i;
             }
             sum += arr[i];
             if (sum > maxSum) 
             {
                 maxSum = sum;
                 right = i;
             }
         }
         for(int i = left; i <= right; i++) cout << arr[i] << " ";
}
 
int main() {
  vector<int> arr = {-3, 2, -4, 5, -2, -1, 2, 4, -4};
  largestSubarraySum(arr);
  return 0;
}
