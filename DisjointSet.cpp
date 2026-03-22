#include<bits/stdc++.h>
using namespace std;

class DisjointSet 
{
        vector<int> parent;
    public:
        DisjointSet(int n)
        {
            parent.resize(n+1, -1);
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
                        int k = parent[parent_b];
                        parent[parent_b] = parent_a;
                        parent[parent_a] += k;
                    }
                    else
                    {
                        int k = parent[parent_a];
                        parent[parent_a] = parent_b;
                        parent[parent_b] += k;
                    }
            }
        }
};
 
int main() {
    DisjointSet dijSet(6);
    dijSet.union_size(0, 1);
    dijSet.union_size(1, 2);
    dijSet.union_size(3, 4);
    dijSet.union_size(4, 5);
    dijSet.union_size(2, 5);
    if (dijSet.find(0) == dijSet.find(3)) cout << "Same Component" << endl;
    else cout << "Different Component" << endl;
  return 0;
}
