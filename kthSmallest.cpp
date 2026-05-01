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
    void inorderTraversal(Node* root, vector<int> &ans)
    {
        if (root == nullptr) return ;
        inorderTraversal(root -> left, ans);
        ans.push_back(root -> data);
        inorderTraversal(root -> right, ans);
    }
    int kthSmallest(Node* root, int k) {
        vector<int> ans;
        inorderTraversal(root, ans);
        if (ans[k-1] == 0) return -1;
        return ans[k-1];
    }
};
