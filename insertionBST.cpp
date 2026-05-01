#include<bits/stdc++.h>
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
    Node* insertionBST(Node* root, int target) {
        if (!root) return new Node(target);
        Node* curr = root;
        while (1)
        {
            if (target < curr -> data)
            {
                if (!curr -> left) 
                {
                    curr -> left = new Node(target);
                    break;
                }
                curr = curr -> left;
            }
            else 
            {
                if (!curr -> right)
                {
                    curr -> right = new Node(target);
                    break;
                }
                curr = curr -> right;
            }
        }
        return root;
    }
};
