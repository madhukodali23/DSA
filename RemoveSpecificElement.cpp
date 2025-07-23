#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeSpecificElement(vector<int>& arr, int target) {
        int j = 0;
        int n = arr.size();
        for(int i=0;i<=n-1;i++)
        {
            if (arr[i] != target)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
        return j;
    }
};
