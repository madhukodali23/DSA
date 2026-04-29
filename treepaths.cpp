#include <bits/stdc++.h>
using namespace std;

/*
class Node {
public:
  int data;
  Node *left, *right;

  Node(int data) {
      this->data = data;
      left = right = nullptr;
  }
};
*/

class solution{
public:
    void preorder(Node* root, vector<vector<int>> &ans, vector<int> &temp)
    {
        if (root == nullptr) return;
        if (!root -> left && !root -> right)
        {
            temp.push_back(root -> data);
            ans.push_back(temp);
            temp.pop_back();
            return;
        }
        temp.push_back(root -> data);
        preorder(root -> left, ans, temp);
        preorder(root -> right, ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> treepaths(Node* root) {
       vector<vector<int>> ans;
       vector<int> temp;
       preorder(root,ans,temp);
       return ans;
    }
};
