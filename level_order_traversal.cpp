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
            this -> left = nullptr;
            this -> right = nullptr;
        }
};

vector<int> level_order_traversal(Node* root)
{
    queue<Node*> q;
    vector<int> ans;
    if (root == nullptr) return ans;
    q.push(root);
    while (!q.empty())
    {
        int length = q.size();
        for(int i=1; i<= length;i++)
        {
            Node* n = q.front();
            q.pop();
            if (n -> left != nullptr)
            {
                q.push(n -> left);
            }
            if (n -> right != nullptr)
            {
                q.push(n -> right);
            }
            ans.push_back(n -> data);
        }
    }
    return ans;
}


 
int main() {
  Node* n = new Node(10);
  n -> left = new Node(20);
  n -> right = new Node(30);
  n -> left -> left = new Node(40);
  n -> left -> right = new Node(50);
  n -> right -> left = new Node(60);
  n -> right -> right = new Node(70);
  vector<int> ans = level_order_traversal(n);
  for(int k : ans) cout << k << " ";
  return 0; 
}
