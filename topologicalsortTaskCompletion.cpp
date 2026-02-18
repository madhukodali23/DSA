#include <bits/stdc++.h>
using namespace std;

class solution{
public:
   bool topologicalSort(int n, vector<vector<int>> &adj)
    {
        vector<int> ans;
        vector<int> indegree(n, 0);
        queue<int> q;
        for(int i = 0;i<n;i++)
        {
            for(int j : adj[i])
            {
                indegree[j] += 1;
            }
        }
        
        for(int i = 0; i< n;i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        while (!q.empty())
        {
            int temp = q.front();
            ans.push_back(temp);
            for(int k : adj[temp])
            {
                indegree[k] -= 1;
                if (indegree[k] == 0)
                {
                    q.push(k);
                }
            }
            q.pop();
        }
        
        if (ans.size() != n) return false;
        return true;
    }
    bool taskCompletion(int n, int p, vector<pair<int,int>> &prerequisites){
           vector<vector<int>> adj(n);
           for(int i = 0;i<p;i++)
           { 
              int t = prerequisites[i].first;
              int f = prerequisites[i].second;
              adj[f].push_back(t);
           }
          return topologicalSort(n, adj);
    }
};
