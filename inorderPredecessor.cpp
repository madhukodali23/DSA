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
    void inorder(Node* root, vector<Node*> &ans )
    {
        if (!root) return;
        inorder(root -> left, ans);
        ans.push_back(root);
        inorder(root -> right, ans);
    }
    Node* predecessor(Node* root, int target) {
        if (!root)  return nullptr;
        vector<Node*> ans;
         inorder(root, ans);
         for(int i = 0; i < ans.size(); i++)
         {
             if (ans[i]->data == target)
             {
                  if (i-1 < 0) return nullptr;
                  return ans[i-1];
             }
         }
    }
};
