#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, vector<vector<int>> adj)
{
      queue<int> q;
      vector<int> visited(n, 0);
      vector<int> ans;
      q.push(adj[0][0]);
      visited[adj[0][0]] = 1;
      while (!q.empty())
      {
          int temp = q.front();
          ans.push_back(temp);
          for(int k : adj[temp]) 
          {
              if (visited[k] != 1)
              {
                  q.push(k);
                  visited[k] = 1;
              }
          }
          q.pop();
      }
      return ans;
}


void dfs(int curr, vector<int> &visited, vector<int> &ans, vector<vector<int>> &adj)
{
    ans.push_back(curr);
    visited[curr] = 1;
    for(int i : adj[curr])
    {
       if(visited[i] == 0) dfs(i, visited, ans, adj);
    }
}

 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<int>> adj(n);
  for(int i = 1; i<= e;i++)
  {
      int f, t;
      cin >> f >> t;
      adj[f].push_back(t);
  }
  vector<int> ans;
  vector<int> visited(n, 0);
  dfs(0, visited, ans, adj);
  for(int k : ans) cout << k << " ";
  return 0;
}
