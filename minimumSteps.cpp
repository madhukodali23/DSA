#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int minimumSteps(vector<int>& arr, int start, int target)  {
       queue<pair<int, int>> q;
       vector<int> distance(100000, INT_MAX);
       distance[start] = 0;
       q.push({start, 0});
       while (!q.empty())
       {
           auto temp = q.front();
           q.pop();
           int steps = temp.second;
           int node = temp.first;
           for(int i=0;i<arr.size();i++)
           {
               int newVal = (node * arr[i]) % 100000;
               if (steps+1 < distance[newVal])
               {
                   distance[newVal] = steps+1;
                   q.push({newVal, steps+1});
               }
           }
       }
       return distance[target] == INT_MAX ? -1 : distance[target];
    }
};
