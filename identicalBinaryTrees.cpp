#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class solution {
public:
    bool isSameTree(Node* root1, Node* root2){
      if (root1 == nullptr && root2 == nullptr) return true;
      if (root1 != nullptr && root2 == nullptr) return false;
      if (root1 == nullptr && root2 != nullptr) return false;
      if (root1 -> data != root2 -> data) return false;
      bool left = isSameTree(root1 -> left, root2 -> left);
      bool right = isSameTree(root1 -> right, root2 -> right);
      return left && right;
    }
};
