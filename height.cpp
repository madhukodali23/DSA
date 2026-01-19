#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int data;
        Node* left;
        Node* right;
    public:
        Node(int value)
        {
            data = value;
            left = nullptr;
            right = nullptr;
        }
};

int height_of_tree(Node* root)
{
    if (root == nullptr) return 0;
    return 1 + max(height_of_tree(root -> left) , height_of_tree(root -> right));
}
 
int main() {
  Node* root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> right = new Node(4);
  root -> left -> left = new Node(5);
  root -> left -> right = new Node(6);
  root -> left -> left -> left = new Node(7);
  cout << height_of_tree(root);
  return 0;
}
