#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/

class solution {
public:
    Node* deleteMiddle(Node* head) {
        Node* fast = head;
        Node* slow = head;
        Node* prev = nullptr;
        if (head == nullptr) return head;
        if (head -> next == nullptr) 
        {
            delete head;
            return nullptr;
        }
        while (fast != nullptr && fast -> next != nullptr)
        {
            prev = slow;
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        Node* n = slow;
        prev -> next = slow -> next;
        delete n;
        return head;
    }

};
