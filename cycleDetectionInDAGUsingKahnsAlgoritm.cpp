#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool kahnsAlgorithm(vector<vector<int>> adj)
    {
        int n = adj.size();
        vector<int> ans;
        queue<int> q;
        vector<int> indegree(n, 0);
        for(int i = 0; i< n;i++)
        {
            for(int j : adj[i])
            {
                indegree[j] += 1;
            }
        }
        

        for(int i = 0; i< n;i++)
        {
            if (indegree[i] == 0) q.push(i);
        }
        
        while (!q.empty())
        {
            int temp = q.front();
            ans.push_back(temp);
            for(int i : adj[temp])
            {
                indegree[i] -= 1;
                if (indegree[i] == 0) q.push(i);
            }
            q.pop();
        }
        
        if (ans.size() != n) return true;
        return false;
    }
    bool cycle(vector<vector<int>> adj){
        return kahnsAlgorithm(adj);
    }
};
