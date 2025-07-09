#include <bits/stdc++.h>
using namespace std;

class solution {
public:    
    void rearrangeArray(vector<int>& arr, int k) {
        int n = arr.size();
        for(int i=0;i<k;i++)
        {
            int minIndex = i;
            for(int j=i+1;j<n;j++)
            {
               if (arr[j] < arr[minIndex])
               {
                   minIndex = j;
               }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
};
