#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> findKeyElements(const vector<int>& arr, int T) {
        int n = arr.size();
        vector<long long> dominant;
        dominant.push_back(arr[n-1]);
        if (n == 1) return dominant;
        long long sum = arr[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            if (arr[i]-sum > T) 
            {
                dominant.push_back(arr[i]);
            }
            sum += arr[i];
        }
        reverse(dominant.begin(), dominant.end());
        return dominant;
    }
};
