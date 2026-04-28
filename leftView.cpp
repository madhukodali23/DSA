#include <bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution{
public:
    vector<int> leftView(Node* root) {
        queue<pair<Node*, int>> q;
        vector<int> ans;
        map<int, int> mp;
        if (root == nullptr) return ans;
        q.push({root, 0});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int pos = temp.second;
            if (mp.find(pos) == mp.end())
            {
                mp[pos] = node -> data;
            }
            if (node -> left) q.push({node -> left, pos+1});
            if (node -> right) q.push({node -> right, pos+1});
        }
        for(auto m : mp) ans.push_back(m.second);
        return ans;
    }
};
