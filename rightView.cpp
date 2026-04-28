#include <bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class Solution {
public:
    vector<int> rightView(Node* root) {
        queue<pair<Node*, int>> q;
        if (root == nullptr) return {};
        map<int, int> mp;
        q.push({root, 0});
        vector<int> ans;
        while (!q.empty())
        {
            auto temp = q.front();
            Node* node = temp.first;
            int pos = temp.second;
            q.pop();
            mp[pos] = node -> data;
            if (node -> left) q.push({node -> left, pos+1});
            if (node -> right) q.push({node -> right, pos+1});
        }
        for(auto m : mp) ans.push_back(m.second);
        return ans;
    }
};
