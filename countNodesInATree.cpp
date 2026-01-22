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
class solution {
public:
    int totalFamilyMembers(Node* root) {
       queue<Node*> q;
       if (root == nullptr) return 0;
       q.push(root);
       int nodeCount = 0;
       while (!q.empty())
       {
           Node* temp = q.front();
           q.pop();
           nodeCount++;
           if (temp -> left != nullptr) q.push(temp -> left);
           if (temp -> right != nullptr) q.push(temp -> right);
       }
       return nodeCount;
    }
};
