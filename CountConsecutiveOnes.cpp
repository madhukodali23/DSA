#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int maxConsecutiveOnes(int arr[], int n){
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++) {
            if (arr[i] == 1) {
                count++;
                ans = max(ans, count);
            }
            else {
                count = 0;
            }
        }
        return ans;
    }
};
