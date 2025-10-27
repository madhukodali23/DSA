#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int f(int m,  int n, vector<vector<int>> &grid)
    {
        vector<int> prev(n);
        vector<int> curr(n);
        int right = 101;
        int down = 101;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (i == 0 && j == 0)
                {
                    curr[j] = grid[i][j];
                }
                else
                {
                  if (j > 0)  right = grid[i][j] + curr[j-1];
                  if (i > 0)  down = grid[i][j] + prev[j];
                  curr[j] = min(right, down);
                }
            }
            prev = curr;
        }
        return curr[n-1];
    }
    int minimumPath(int m, int n, vector<vector<int>> &grid){
        return f(m, n, grid);
    }
};
