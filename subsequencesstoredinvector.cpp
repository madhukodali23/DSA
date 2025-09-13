#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void subSequence(int arr[], int n, vector<vector<int>> &ans, vector<int> v, int i)
    {
        if (i >= n) 
        {
             vector<int> temp;
             for(auto k : v)
             {
                 temp.push_back(k);
             }
             ans.emplace_back(temp);
             return;
        }
        
        v.push_back(arr[i]);
        subSequence(arr, n,ans, v, i+1);

        v.pop_back();
        subSequence(arr, n,ans, v, i+1);
    }
    vector<vector<int>> findSubsequences(int arr[], int n) {
        vector<vector<int>> ans;
        vector<int> v;
        subSequence(arr, n, ans, v, 0);
        return ans;
    }
};
