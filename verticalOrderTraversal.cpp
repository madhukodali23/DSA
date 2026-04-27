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
    void vertical_traversal(Node* root, map<int, map<int, vector<int>>> &mp)
    {
        queue<pair<Node*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            int row = temp.second.first, col = temp.second.second;
            mp[col][row].push_back(temp.first -> data);
            if (temp.first -> left) q.push({temp.first -> left, {row+1, col-1}});
            if (temp.first -> right) q.push({temp.first -> right, {row+1, col+1}});
        }
    }
    vector<vector<int>> verticalOrderTraversal(Node* root) {
        map<int, map<int, vector<int>>> mp;
        vertical_traversal(root, mp);
        vector<vector<int>> ans;
        for(auto c : mp)
        {
            vector<int> temp1;
            for(auto r : c.second) 
            {
                vector<int> temp2 = r.second;
                sort(temp2.begin(), temp2.end());
                temp1.insert(temp1.end(), temp2.begin(), temp2.end());
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};
