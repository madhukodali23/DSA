#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int data;
        Node* left;
        Node* right;
    public:
        Node(int data)
        {
            this -> data = data;
            this -> left = nullptr;
            this -> right = nullptr;
        }
};

void print_data(Node* root)
{
    if (root == nullptr) return; //inorder traversal
    print_data(root -> left);
    cout << root -> data << " ";
    print_data(root -> right);
}
 
int main() {
  Node* n = new Node(10);
  n -> left = new Node(20);
  n -> right = new Node(30);
  print_data(n);
  return 0;
}
