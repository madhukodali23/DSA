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
    int preorderSum(Node* root)
    {
        if (!root) return 0;
        if (!root -> left && !root -> right) return root -> data;
        int left = preorderSum(root -> left);
        int right = preorderSum(root -> right);
        if (left + right == root -> data) return root -> data;
        return -1;
    }
    bool childrenSumProperty(Node* root) {
        if (preorderSum(root) == root -> data) return true;
        return false;
    }
};
