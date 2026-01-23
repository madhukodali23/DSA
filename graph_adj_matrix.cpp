#include<bits/stdc++.h>
using namespace std;

//graph representation
//adjacency matrix
//TC : O(n)
//SC : O(n^2)
 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<int>> adj(n+1, vector<int>(n+1, 0));
  for(int i=1;i<=e;i++)
  {
        int f, t;
        cin >> f >> t;
        adj[f][t] = 1;
        adj[t][f] = 1;
  }
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=n;j++)
      {
          cout << adj[i][j] << " ";
      }
      cout << endl;
  }
  return 0;
}
