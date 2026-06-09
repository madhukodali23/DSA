#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        return arr[arr.size() / 2];
    }
};
