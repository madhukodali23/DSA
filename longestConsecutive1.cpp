#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool search(vector<int> &arr, int x)
    {
        int n = arr.size();
        for(int i=0; i < n; i++)
        {
            if(arr[i] == x) return true;
        }
        return false;
    }
    
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        if (n == 0) return ans;
        for(int i = 0; i < n; i++)
        {
            int x = arr[i]+1;
            int count = 1;
            while(search(arr, x))
            {
                x = x + 1;
                count = count + 1;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
