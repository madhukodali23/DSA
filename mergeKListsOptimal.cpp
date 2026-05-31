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
class solution {
public:
    Node* merge(vector<Node*> &arr)
    {
        priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;
        for(int i = 0; i < arr.size(); i++)
        {
            auto node = arr[i];
            if (node) pq.push({node -> data, node});
        }
        Node* dummy = new Node(0);
        Node* curr = dummy;
        while (!pq.empty())
        {
            auto temp = pq.top();
            int val = temp.first;
            Node* node = temp.second;
            pq.pop();
            curr -> next = node;
            curr = curr -> next;
            if (node -> next) pq.push({node -> next -> data,node ->next});
        }
        return dummy -> next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        if (arr.size() == 0) return nullptr;
         if (arr.size() == 1) return arr[0];
        return merge(arr);
    }
};
