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
    Node* preorder(Node* root, Node* p, Node* q)
    {
        if (root== nullptr || root == p || root == q) return root;
        Node* left = preorder(root -> left, p, q);
        Node* right = preorder(root -> right, p, q);
        if (!left) return right;
        if (!right) return left;
        return root;
    }
    Node* lca(Node* root, Node* p, Node* q) {
        if (!root) return root;
        return preorder(root, p, q);
    }
};
