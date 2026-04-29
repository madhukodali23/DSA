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
    bool check(Node* root1, Node* root2)
    {
        if (!root1 && !root2) return true;
        if (!root1 && root2) return false;
        if (root1 && !root2) return false;
        if (root1 -> data != root2 -> data) return false;
        return check(root1->left, root2->right) && check(root1->right, root2->left);
    }
    bool symmetric(Node* root) {
        if (!root) return true;
        return check(root->left, root->right);
    }
};
