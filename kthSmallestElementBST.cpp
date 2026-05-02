#include<bits/stdc++.h>
using namespace std;

/*class Node {
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution {
public:
    void inorderTraversal(Node* root, int k, int &index, int &ans)
    {
        if (root == nullptr) return ;
        inorderTraversal(root -> left, k, index, ans);
        index++;
        if (index == k) {
            ans = root -> data;
            return;
        }
        inorderTraversal(root -> right, k, index, ans);
    }
    int kthSmallest(Node* root, int k) {
        int index = 0;
        int ans = -1;
        inorderTraversal(root, k, index, ans);
        return ans;
    }
};
