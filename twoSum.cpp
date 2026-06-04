#include <bits/stdc++.h>
using namespace std;

class solution {
   public:
    vector<int> twoSum(vector<int>& arr, int k) {
        map<int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            int key = k - arr[i];
            if (mp.find(key) != mp.end())
            {
                return {mp[key], i};
            }
            mp[key] = i;
        }
        return {};
    }
};
