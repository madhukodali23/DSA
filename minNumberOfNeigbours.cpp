#include<bits/stdc++.h>
using namespace std;

class solution {
public: 
    void floydMarshall(vector<vector<int>> &matrix, int maxDistance)
    {
        int n = matrix.size();
        for(int i = 0; i < n; i++)
        {
            matrix[i][i] = 0;
        }
        for(int k = 0; k < n; k++)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    int dist = matrix[i][k] + matrix[k][j];
                    if (dist < matrix[i][j])
                    {
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                    }
                }
            }
        }
    }
    int citySmallestNeighbours(int n, vector<vector<int>>& edges, int maxDistance) {
        vector<vector<int>> matrix(n, vector<int>(n, 1e9));
        for(int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0], b = edges[i][1], weight = edges[i][2];
            matrix[a][b] = weight;
            matrix[b][a] = weight;
        }
        floydMarshall(matrix, maxDistance);
        int node = n-1;
        int minNeighbours = 1e9;
        for(int i = n-1; i >= 0; i--)
        {
            int nodeCount = 0;
            for(int j = 0; j< n; j++)
            {
                if (matrix[i][j] <= maxDistance && i!=j)
                {
                    nodeCount++;
                }
            }
            if (nodeCount < minNeighbours)
            {
                minNeighbours = nodeCount;
                node = i;
            }
        }
        
       return node;
    }
};
