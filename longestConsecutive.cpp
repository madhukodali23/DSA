#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        sort(arr.begin(), arr.end());
        int ans = 1;
        int count = 1;
        for(int i = 0; i < n-1; i++)
        {
            int difference = arr[i+1]-arr[i];
            if (difference == 1)
            {
                count++;
                ans = max(ans, count);
            }
            else if (difference == 0)
            {
                continue;
            }
            else
            {
                count = 1;
            }
        }
        return ans;
    }
};
