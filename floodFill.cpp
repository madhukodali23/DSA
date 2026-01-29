#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int i, int j, vector<vector<int>>& image, int newColor)
    {
        int m = image.size();
        int n = image[0].size();
        int prev = image[i][j];
        image[i][j] = newColor;
        if (i+1 < m && image[i+1][j] == prev)
        {
            dfs(i+1, j, image, newColor);
        }
        
        if (i-1 >= 0  && image[i-1][j] == prev)
        {
            dfs(i-1, j, image, newColor);
        }
        
        if (j-1 >= 0 && image[i][j-1] == prev)
        {
            dfs(i, j-1, image, newColor);
        }
        
        if (j+1 < n && image[i][j+1] == prev)
        {
            dfs(i, j+1, image, newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c,int newColor){
           int m = image.size();
           int n = image[0].size();
           if (newColor == image[r][c]) return image;
           dfs(r, c, image, newColor);
           return image;
    }
};
