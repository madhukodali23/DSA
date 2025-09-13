#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void subsequences(int arr[], int n, vector<int>& v,int i, int k, vector<vector<int>> &ans)
    {
        if (i >= n)
        {
            int sum = 0;
            for(auto k : v)
            {
                sum += k;
            }
            if (sum == k)
            {
                ans.emplace_back(v);
            }
            return;
        }
        
        v.push_back(arr[i]);
        subsequences(arr,n,v, i+1, k, ans);
        v.pop_back();
        subsequences(arr,n,v, i+1, k, ans);
    }
    vector<vector<int>> findSubSequencesWithSumK(int arr[], int n, int k) {
        vector<int> v;
        vector<vector<int>> ans;
        int i = 0;
        subsequences(arr, n, v, i, k, ans);
        return ans;
    }
};
