#include <bits/stdc++.h>
using namespace std;

/*class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};*/

class solution{
    public:
    int max_down_path(Node* root, int &ans)
    {
        if (root == nullptr) return 0;
        int l = max_down_path(root -> left, ans);
        if (l < 0) l = 0;
        int r = max_down_path(root -> right, ans);
        if (r < 0)  r = 0;
        int x = root -> data + l + r;
        ans = max(ans, x);
        return root -> data + max(l, r);
    }
    int maxPathSum(Node* root){
        if (root == nullptr) return 0;
        int ans = INT_MIN;
        max_down_path(root, ans);
        return ans;
    }
};
