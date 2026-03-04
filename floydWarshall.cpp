#include<bits/stdc++.h>
using namespace std;

void floyd_marshall(int n, vector<vector<int>> &adj)
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(adj[i][k] != INT_MAX && adj[k][j] != INT_MAX)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
}
 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<int>>edges;
  for(int i = 0; i < e; i++)
  {
      int a, b, weight;
      cin >> a >> b >> weight;
      edges.push_back({a, b, weight});
  }

  
  vector<vector<int>>adj(n, vector<int>(n, INT_MAX));
  for(int i = 0; i< e;i++)
  {
      int a = edges[i][0], b = edges[i][1] , c = edges[i][2];
      adj[a][b] = c; 
  }
  
  for(int i = 0; i < n; i++)
    {
        adj[i][i] = 0;
    }
  
 floyd_marshall(n, adj);
  for(int i = 0; i< n;i++)
      {
          for(int j = 0; j < n; j++){
              cout << adj[i][j] << " ";
          } 
          cout << endl;
      }
      
  return 0;
}
