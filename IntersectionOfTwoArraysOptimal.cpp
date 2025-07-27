#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> intersectionSortedArrays(vector<int> a, vector<int> b){
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
        vector<int> ans;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};
