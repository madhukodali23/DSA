#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
         int #include<bits/stdc++.h>
using namespace std;


class solution {
    public:
         int largestSubarraySum(vector<int>& arr) {
             int n = arr.size();
             int sum = 0;
             int maxSum = INT_MIN;
             for(int r = 0; r < n;r++)
             {
                 if (sum < 0) sum = 0;
                 sum += arr[r];
                 maxSum = max(maxSum, sum);
             }
             return maxSum;
        }

};(vector<int>& arr) {
             int n = arr.size();
             int sum = 0;
             int maxSum = INT_MIN;
             for(int r = 0; r < n;r++)
             {
                 if (sum < 0) sum = 0;
                 sum += arr[r];
                 maxSum = max(maxSum, sum);
             }
             return maxSum;
        }

};
