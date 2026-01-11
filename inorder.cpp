#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int data;
        Node* left;
        Node* right;
    public:
        Node(int val)
        {
            data = val;
            left = nullptr;
            right = nullptr;
        }
};

void inorder_traversal(Node* root)
{
    if (root == nullptr) return;
    inorder_traversal(root -> left);
    cout << root -> data << " ";
    inorder_traversal(root -> right);
}

 
int main() {
  Node* n = new Node(10);
  n -> left = new Node(20);
  n -> right = new Node(30);
  n -> left -> left = new Node(40);
  n -> left -> right = new Node(50);
  n -> right -> left = new Node(60);
  n -> right -> right = new Node(70);
  inorder_traversal(n);
  cout << endl;
  preorder_traversal(n);
  return 0;
}
