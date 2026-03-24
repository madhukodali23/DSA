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
            if (parent[node] < 0)
            {
                return node;
            }
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

class solution {
public: 
    vector<vector<string>> mergeUserProfile(vector<vector<string>> &info) 
    {
        int n = info.size();
        DisjointSet dis_set(n);
        map<string, int> mp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < info[i].size(); j++)
            {
                string email = info[i][j];
                if (mp.find(email) == mp.end())
                {
                    mp.insert({email, i});
                }
                else
                {
                    dis_set.union_size(i, mp[email]);
                }
            }
        }
        
        vector<vector<string>> ans1(n);
        vector<vector<string>> ans2;
        
        for(int i = 0; i < n; i++)
        {
            ans1[i].push_back(info[i][0]);
        }
        
        for(auto k : mp)
        {
            string email = k.first;
            int parent = k.second;
            int ultimate_parent = dis_set.find(parent);
            ans1[ultimate_parent].push_back(email);
        }
        
        for(int i = 0; i < n; i++)
        { 
            if (dis_set.parent[i] < 0)
            {
                sort(ans1[i].begin()+1, ans1[i].end());
                ans2.push_back(ans1[i]);
            }
        }
        
        return ans2;
    }
};
