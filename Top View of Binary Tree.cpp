#include <bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};
*/

class solution{
public:
    vector<int> topView(Node* root) {
        if (root == nullptr) return {};
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        vector<int> ans;
        q.push({root, 0});
        while (!q.empty())
        {
            auto temp = q.front();
            Node* node = temp.first;
            int pos = temp.second;
            if (mp.find(pos) == mp.end())
            {
                mp[pos] = node -> data;
            }
            q.pop();
            if (node -> left) q.push({node->left, pos-1});
            if (node -> right) q.push({node->right, pos+1});
        }
        for(auto k : mp) ans.push_back(k.second);
        return ans;
    }
};
