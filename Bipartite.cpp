#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    bool dfs(int color, int start, vector<vector<int>>& adj, vector<int> &colorNode)
    {
        colorNode[start] = color;
        for(int k : adj[start])
        {
            if (colorNode[k] == 0)
            {
                if (color == 1)
                {
                    if (dfs(-1, k, adj, colorNode) == false) return false;
                }
                else
                {
                   if ( dfs(1, k, adj, colorNode) == false ) return false;
                }
            }
            else if (colorNode[start] == colorNode[k])
            {
                return false;
            }
        }
        return true;
    }
    bool bipartite(vector<vector<int>>& adj, int n) {
        vector<int> colorNode(n, 0);
        for(int i=0;i<n;i++)
        {
            if (colorNode[i] == 0)
            {
                if (dfs(1, i, adj, colorNode) == false) return false;
            }
        }
        return true;
    }
};
