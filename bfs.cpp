#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, vector<vector<int>> adj)
{
      queue<int> q;
      vector<int> visited(n, 0);
      vector<int> ans;
      q.push(adj[0][0]);
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
          visited[temp] = 1;
          q.pop();
      }
      return ans;
}

 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<int>> adj(n+1);
 vector<int> ans;
  
  
  for(int i=1;i<=e;i++)
  {
       int f, t;
       cin >> f >> t;
       adj[f].push_back(t);
  }
  
  ans = bfs(n, adj);
  for(int k : ans) cout << k << " ";
  return 0;
}
