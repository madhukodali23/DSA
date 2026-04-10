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
public :
    vector<vector<int>> zigZag(Node* root) {
        if (root == nullptr) return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        int count = 0;
        while(!q.empty())
        {
            int length = q.size();
            vector<int> intermediateResult;
            for(int i = 0; i < length; i++)
            {
                Node* temp = q.front();
                q.pop();
                if (temp -> left != nullptr) 
                {
                    q.push(temp -> left);
                }
                if (temp -> right != nullptr)
                {
                    q.push(temp -> right);
                }
                intermediateResult.push_back(temp -> data);
            }
            if (count % 2 == 1)
            {
                reverse(intermediateResult.begin(), intermediateResult.end());
                ans.push_back(intermediateResult);
            }else
            {
                ans.push_back(intermediateResult);
            }
            count++;
        }
        return ans;
    }
};
