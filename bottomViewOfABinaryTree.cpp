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
    vector<int> bottomView(Node* root) {
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        map<int, int> mp;
        vector<int> ans;
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int pos = temp.second;
            mp[pos] = node -> data;
            if (node -> left) q.push({node -> left, pos-1});
            if (node -> right) q.push({node -> right, pos+1});
        }
        for(auto r : mp)
        {
           ans.push_back(r.second);
        }
        return ans;
    }
};
