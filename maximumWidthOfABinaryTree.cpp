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
    int maxWidth(Node* root) {
        if (!root) return 0;
        queue<pair<Node*, long long>> q;
        q.push({root, 0});
        int ans = -1;
        int width;
        while (!q.empty())
        {
            int length = q.size();
            long long startIndex = q.front().second;
            for(int i = 0; i < length; i++)
            {
                Node* curr = q.front().first;
                long long index = q.front().second - startIndex;
                q.pop();
                width = index + 1;
                if (curr -> left) q.push({curr -> left, 2*index+1});
                if (curr -> right) q.push({curr -> right, 2*index+2});
            }
            ans = max(ans, width);
        }
        return ans;
    }
};
