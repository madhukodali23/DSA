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
        vector<vector<int>> matrix(n, vector<int>(n, 1e7));
        for(int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0], b = edges[i][1], weight = edges[i][2];
            matrix[a][b] = weight;
            matrix[b][a] = weight;
        }
        floydMarshall(matrix, maxDistance);
        vector<int> neighbourCount(n, 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j< n; j++)
            {
                if (matrix[i][j] <= maxDistance && matrix[i][j] != 0)
                {
                    neighbourCount[i]++;
                }
            }
        }
        
        int node = 0;
        int leastNeighbourDist = neighbourCount[0];
        for(int i = 1 ; i<n;i++) 
        {
            if (neighbourCount[i] <= leastNeighbourDist)
            {
                leastNeighbourDist = neighbourCount[i];
                node = i;
            }
        }

        return node;
    }
};
