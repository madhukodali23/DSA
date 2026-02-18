#include<bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> adj)
 {
     int n = adj.size();
     vector<int> indegree(n);
     vector<int> ans;
     queue<int> q;
     for(int i = 0;i<n;i++)
     {
         for(int j = 0; j < adj[i].size(); j++)
         {
             int val = adj[i][j];
             indegree[val]++;
         }
     }
     for(int i =0 ; i<n ;i++) 
     {
         if (indegree[i] == 0) q.push(i);
     }
     while (!q.empty())
     {
         int temp = q.front();
         ans.push_back(temp);
         for(int k : adj[temp])
         {
            if (indegree[k] > 0) indegree[k]--;
            if (indegree[k] == 0) q.push(k);
         }
         q.pop();
     }
     return ans;
 }
 
int main() {
  int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> res = topologicalSort(adj);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}
