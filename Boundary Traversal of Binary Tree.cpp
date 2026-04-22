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
    bool isLeaf(Node* root)
    {
        if (!root -> left && !root -> right) return true;
        return false;
    }
    
    void leftBoundary(Node* root, vector<int>&ans)
    {
        Node* curr = root -> left;
        while (curr)
        {
            if (!isLeaf(curr)) ans.push_back(curr -> data);
            if (curr -> left) curr = curr -> left;
            else curr = curr -> right;
        }
    }
    
    void rightBoundary(Node* root, vector<int>&ans)
    {
        Node* curr = root -> right;
        vector<int> temp;
        while (curr)
        {
            if (!isLeaf(curr)) temp.push_back(curr -> data);
            if (curr -> right) curr = curr -> right;
            else curr = curr -> left;
        }
        int length = temp.size();
        for(int i = length-1; i >= 0; i--) ans.push_back(temp[i]);
    }
    

    void leafNodes(Node* root, vector<int> &ans)
    {
        if (root == nullptr) return;
        if (isLeaf(root)) ans.push_back(root -> data);
        leafNodes(root -> left, ans);
        leafNodes(root -> right, ans);
    }
    
    vector<int> boundaryTraversal(Node* root) {
        vector<int> ans;
        if (!root) return ans;
        if (!isLeaf(root)) ans.push_back(root -> data);
        leftBoundary(root, ans);
        leafNodes(root, ans);
        rightBoundary(root, ans);
        return ans;
    }
};
