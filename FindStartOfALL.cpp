#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node(int data, Node* next) : data(data), next(next) {}
        Node(int data) : data(data), next(nullptr) {}
};
*/

class solution{
public:
    Node* startNodeCycle(Node* head) {
        Node* curr = head;
        unordered_map<Node*, int> mp;
        while (curr != nullptr)
        {
            if (mp.find(curr) != mp.end()) return curr;
            mp[curr] = 1;
            curr = curr -> next;
        }
        return nullptr;
    }
};
