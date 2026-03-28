#include<bits/stdc++.h>
using namespace std;

class DisjointSet
{
    public:
        vector<int> parent;
    
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
};

class solution{
    public:
    int gemRemoval(vector<vector<int>>& gems){
        int n = gems.size();
        DisjointSet dis_set(n);
        for(int i = 0; i < gems.size(); i++)
        {
            for(int j = i+1; j < gems.size(); j++)
            {
                if (gems[i][0] == gems[j][0] || gems[i][1] == gems[j][1])
                {
                    dis_set.union_size(i, j);
                }
            }
        }
        int components = 0;
        for(int k : dis_set.parent)
        {
            if (k < 0)
            {
                components++;
            }
        }
        return n - components;
    }
};
