#include<bits/stdc++.h>
using namespace std;

class DisjointSet 
{
    vector<int> parent;
    public: 
        DisjointSet(int n)
        {
            parent.resize(n, -1);
        }
        
        int find(int node)
        {
            if (parent[node] < 0) return node;
            return parent[node] = find(parent[node]);
        }
        
        void union_size(int a, int b)
        {
            int parent_a = find(a);
            int parent_b = find(b);
            if (parent_a != parent_b)
            {
                if (parent[parent_a] < parent[parent_b])
                {
                    int temp = parent[parent_b];
                    parent[parent_a] += temp;
                    parent[parent_b] = parent_a;
                }
                else 
                {
                    int temp = parent[parent_a];
                    parent[parent_b] += temp;
                    parent[parent_a] = parent_b;
                }
            }
        }
        
        vector<int> getParent()
        {
            return parent;
        }
};

class solution{
    public:
    int numberComponents(vector<vector<int>> adj_matrix, int n){
        DisjointSet dij_set(n);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if ( i != j && adj_matrix[i][j] == 1)
                {
                    if (dij_set.find(i) != dij_set.find(j))
                    {
                        dij_set.union_size(i, j);
                    }
                }
            }
        }
        
        vector<int> parent = dij_set.getParent();
        int count = 0;
        for(int k : parent) 
        {
            if (k < 0) count++;
        }
        return count;
    }
};
