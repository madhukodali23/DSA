#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> dijkstra(int n, vector<vector<pair<int, int>>>& adj, int start) {
       priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> q;
       vector<int> dist(n, INT_MAX);
       dist[start] = 0;
       q.push({0, start});
       while (!q.empty())
       {
           auto temp = q.top();
           int weight = temp.first;
           int curr = temp.second;
           for(auto k : adj[curr])
           {
               if (k.second + weight < dist[k.first])
               {
                   dist[k.first] = weight + k.second;
                   q.push({dist[k.first], k.first});
               }
           }
           q.pop();
       }
       return dist;
    }
};
