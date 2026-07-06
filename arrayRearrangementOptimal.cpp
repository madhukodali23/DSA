#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
         vector<int> arrayRearrangement(vector<int>& arr) {
             int n = arr.size();
             vector<int> ans(n, 0);
             int pos = 0;
             int neg = 1;
             for(int i = 0; i < n ; i++)
             {
                 if (arr[i] < 0)
                 {
                     ans[neg] = arr[i];
                     neg += 2;
                 }
                 else
                 {
                     ans[pos] = arr[i];
                     pos += 2;
                 }
             }
             return ans;
        }
};
