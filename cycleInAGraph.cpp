#include<bits/stdc++.h>
using namespace std;

bool bfs(int start, int n, vector<vector<int>> adj, vector<int> &visited)
{
    queue<pair<int, int>> q;
    q.push({start, -1});
    visited[start] = 1;
    while (!q.empty())
    {
        pair<int, int> temp = q.front();
        int node = temp.first;
        int parent = temp.second;
        for(int k : adj[node])
        {
            if (k != parent)
            {
                if (visited[k]) return true;
                else
                {
                    q.push({k, node});
                    visited[k] = 1;
                }
            }
        }
        q.pop();
    }
    return false;
}

bool checkCycle(int n, vector<vector<int>> adj)
{
      vector<int> visited(n, 0);
      for(int i=0;i<n;i++)
      {
          if (!visited[i] && bfs(i, n, adj, visited))
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
      adj[t].push_back(f);
  }
  cout << checkCycle(n, adj);
  return 0;
}
