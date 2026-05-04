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
    void push_left(Node* root, stack<Node*> &st)
    {
        while (root)
        {
            st.push(root);
            root = root -> left;
        }
    }
    vector<int> mergeBSTs(Node* root1, Node* root2) {
        vector<int> ans;
        stack<Node*> st1;
        stack<Node*> st2;
        push_left(root1, st1);
        push_left(root2, st2);
        while (!st1.empty() && !st2.empty())
        {
            int temp1 = st1.top() -> data;
            int temp2 = st2.top() -> data;
            Node* node1 = st1.top();
            Node* node2 = st2.top();
            if (temp1 < temp2)
            {
                st1.pop();
                push_left(node1 -> right, st1);
                ans.push_back(temp1);
            }
            else
            {
                st2.pop();
                push_left(node2 -> right, st2);
                ans.push_back(temp2);

            }
        }
        while (!st1.empty())
        {
            Node* node = st1.top();
            int data = node -> data;
            ans.push_back(data);
            st1.pop();
            push_left(node -> right, st1);
        }
        while (!st2.empty())
        {
            Node* node = st2.top();
            int data = node -> data;
            ans.push_back(data);
            st2.pop();
            push_left(node -> right, st2);
        }
        return ans;
    }
};
