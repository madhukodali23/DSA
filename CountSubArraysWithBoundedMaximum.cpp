#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int countSubarraysWithBoundedMax(vector<int>& arr, int minBound, int maxBound) {
        int n = arr.size();
        int count = 0;
        for(int i=0;i<=n-1;i++)
        {
            int max = -1;
            for(int j=i;j<=n-1;j++)
            {
                if (arr[j] > max) max = arr[j];
                if (max >= minBound && max <= maxBound) {
                    count++;
                }
            }
        }
        return count;
    }
};
