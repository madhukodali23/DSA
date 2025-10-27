#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int f(int i,  int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (i == 0 && j == 0)
        {
            return grid[i][j];
        }
        if (i < 0 || j < 0)
        {
            return 101;
        }
        int right = grid[i][j] + f(i, j-1, grid, dp);
        int down = grid[i][j] + f(i-1, j, grid, dp);
        return min(right, down);
    }
    int minimumPath(int m, int n, vector<vector<int>> &grid){
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m-1, n-1, grid, dp);
    }
};
