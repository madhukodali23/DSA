#include<bits/stdc++.h>
using namespace std;




bool dfs(int node, int parent, int n, vector<vector<int>> adj, vector<int> &visited)
{
    visited[node] = 1;
    for(int k : adj[node])
    {
        if (k != parent)
        {
            if (visited[k]) return true;
            else 
            {
               if ( dfs(k, node, n, adj, visited)) return true;
            }
        }
    }
    return false;
}




bool checkCycle(int n, vector<vector<int>> adj)
{
      vector<int> visited(n, 0);
      for(int i=0;i<n;i++)
      {
          if (!visited[i] && dfs(i, -1, n, adj, visited))
          {
              return true;
          }
      }
      return false;
}
 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<int>>adj(n);
  for(int i=1;i<=e;i++)
  {
      int f, t;
      cin >> f >> t;
      adj[f].push_back(t);
  }
  cout << checkCycle(n, adj);
  return 0;
}
