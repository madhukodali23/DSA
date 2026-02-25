#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> shortestPath(vector<pair<int, int>> adj[], int n) {
    priority_queue<pair<int, int>, vector<pair<int, int>>,  greater<pair<int, int>>> q;        
        q.push({0, 0});
        vector<int> dist(n, INT_MAX);
        vector<int> path(n, -1);
        dist[0] = 0;
        while (!q.empty())
        {
            auto x = q.top();
            int distance = x.first;
            int curr = x.second;
            for(auto k : adj[curr])
            {
                int neighbour = k.first;
                int weight = k.second;
                if (distance + weight < dist[neighbour])
                {
                    dist[neighbour] = distance + weight;
                    q.push({dist[neighbour], neighbour});
                    path[neighbour] = curr;
                }
            }
            q.pop();
        }
        int temp = n-1;
        vector<int> ans;
        while (temp != -1)
        {
            ans.push_back(temp);
            temp = path[temp];
        }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};
