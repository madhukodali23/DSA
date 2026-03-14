#include<bits/stdc++.h>
using namespace std;

void primsAlgorithm(vector<vector<pair<int, int>>> &adj)
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
    int ans = 0;
    vector<int> visited(adj.size(), 0);
    vector<pair<int, int>> edges;
    q.push({0, {0, -1}});
    while (!q.empty())
    {
        auto temp = q.top();
        q.pop();
        int cost = temp.first, node = temp.second.first, parent = temp.second.second;
        if (visited[node]) continue; 
        visited[node] = 1;
        if (parent != -1)
        {
            edges.push_back({node, parent});
            ans += cost;
        }
        for(auto k : adj[node])
        {
            if (!visited[k.first])
            {
                q.push({k.second, {k.first, node}});
            }
        }
    }
    for(auto k : edges)
    {
        cout << k.first << ":" << k.second << endl;
    }
    cout << ans << endl;
}


 
int main() {
  int n, e;
  cin >> n >> e;
  vector<vector<pair<int, int>>> adj(n);
  for(int i = 0; i < e; i++)
  {
      int t, f, c;
      cin >> t >> f >> c;
      adj[t].push_back({f, c});
      adj[f].push_back({t, c});
  }
  primsAlgorithm(adj);
  return 0;
}
