#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data, Node* next, Node* prev) : data(data), next(next), prev(prev) {}
        Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};
*/

class solution {
public:
    Node* deleteAllOccurrences(Node* head, int val) {
        Node* prev;
        Node* next;
        Node* curr = head;
        while (curr)
        {
            prev = curr -> prev;
            next = curr -> next;
            if (head == curr && curr -> data == val)
            {
                head = next;
                delete curr;
            }
            else {
                if (curr -> data == val)
                {
                    if (prev) prev -> next = next;
                    if (next) next -> prev = prev;
                    delete curr;
                }
            }
            curr = next;
        }
        return head;
    }
};
