#include<bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int n, vector<vector<int>> edges, int start)
{
    vector<int> distance(n, INT_MAX);
    distance[start] = 0;
    for(int i = 0; i <= n-1; i++)
    {
        bool flag = false;
        for(auto x : edges)
        {
            int a = x[0], b = x[1], weight = x[2];
            if (distance[a] != INT_MAX && distance[a] + weight < distance[b])
            {
                distance[b] = distance[a] + weight;
                flag = true;
            }
        }
        if (!flag) break;
    }
    for(auto x : edges)
    {
        int a = x[0], b = x[1], weight = x[2];
        if (distance[a] != INT_MAX && distance[a] + weight < distance[b])
        {
            return {-1};
        }
    }
    return distance;
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<vector<int>> edges;
    for(int i=0;i<e;i++)
    {
        int f, t, weight;
        cin >> f >> t >> weight;
        edges.push_back({f, t, weight});
    }
    vector<int> distance = bellmanFord(n, edges, 0);
    for(int k : distance) cout << k << " ";
  return 0;
}
