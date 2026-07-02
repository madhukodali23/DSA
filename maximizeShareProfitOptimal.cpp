#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int maximizeShareProfit(vector<int> arr){
        int n = arr.size();
        int ans = 0;
        int minval = INT_MAX;
        for(int i = 0; i < n; i++)
        {   
            if (arr[i] < minval)
            {
                minval = arr[i];
            }
            ans = max(arr[i]-minval, ans);
        }
        return ans;
    }
};
