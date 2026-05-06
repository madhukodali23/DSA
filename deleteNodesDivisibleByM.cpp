#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};*/
class solution{
    public:
        Node* deleteNodesDivisibleByM(Node* head, int m) {
            Node* temp = head;
            vector<int> ans;
            while (temp)
            {
              if (temp -> data % m != 0)   ans.push_back(temp -> data);
                temp = temp -> next;
            }
            if (ans.size() == 0) return nullptr;
            temp = head;
            Node* prev;
            for(int k : ans)
            {
                temp -> data = k;
                prev = temp;
                temp = temp -> next;
            }
            prev -> next = nullptr;
            return head;
        }
};
