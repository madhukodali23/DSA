#include<bits/stdc++.h>
using namespace std;


class solution {
    public:
         vector<int> arrayRearrangement(vector<int>& arr) {
             vector<int> positive;
             vector<int> negative;
             int n = arr.size();
             for(int i = 0; i < n; i++)
             {
                 if (arr[i] < 0) negative.push_back(arr[i]);
                 else positive.push_back(arr[i]);
             }
             for(int i = 0; i < n; i++)
             {
                 if (i % 2 == 0) arr[i] = positive[i/2];
                 else arr[i] = negative[i/2];
             }
             return arr ;
        }
};
