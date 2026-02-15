#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void fibanocciSeries(int k, vector<int> &start, int n)
    {
        if (start.size() == n) return;
        int sum = 0;
        for(int i = start.size()-k; i < start.size(); i++)
        {
            sum = sum + start[i];
        }
        start.push_back(sum);
        fibanocciSeries(k, start, n);
    }
    vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
     
      fibanocciSeries(k, start, n);
      return start;
    }
};
