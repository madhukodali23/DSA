#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int minimumEffort(vector<vector<int>>& grid){
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> effort(m, vector<int>(n, INT_MAX));
        q.push({0, {0, 0}});
        effort[0][0] = 0;
        while (!q.empty())
        {
            auto temp = q.top();
            q.pop();
            int dist = temp.first;
            int i = temp.second.first, j = temp.second.second;
            if (i - 1 >= 0)
            {
                int diff = abs(grid[i][j] - grid[i-1][j]);
                int maxDiff = max(diff, effort[i][j]);
                if (maxDiff < effort[i-1][j])
                {
                    effort[i-1][j] = maxDiff;
                    q.push({maxDiff, {i-1, j}});
                }
            }
            if (i +1 < m)
            {
                int diff = abs(grid[i][j] - grid[i+1][j]);
                int maxDiff = max(diff, effort[i][j]);
                if (maxDiff < effort[i+1][j])
                {
                    effort[i+1][j] = maxDiff;
                    q.push({maxDiff, {i+1, j}});
                }
            }
            if (j - 1 >= 0)
            {
                int diff = abs(grid[i][j] - grid[i][j-1]);
                int maxDiff = max(diff, effort[i][j]);
                if (maxDiff < effort[i][j-1])
                {
                    effort[i][j-1] = maxDiff;
                    q.push({maxDiff, {i, j-1}});
                }
            }
            if (j + 1 < n)
            {
                int diff = abs(grid[i][j] - grid[i][j+1]);
                int maxDiff = max(diff, effort[i][j]);
                if (maxDiff < effort[i][j+1])
                {
                    effort[i][j+1] = maxDiff;
                    q.push({maxDiff, {i, j+1}});
                }
            }
        }
        return effort[m-1][n-1];
    }
};
