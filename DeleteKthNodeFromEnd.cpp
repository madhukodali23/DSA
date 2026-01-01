#include<bits/stdc++.h>
using namespace std;


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


class solution {
public:
    int countNodes(Node* head)
    {
        Node* temp = head;
        int count = 0;
        while (temp != nullptr)
        {
            count++;
            temp = temp -> next;
        }
        return count;
    }
    Node* DeleteKthNodeFromEnd(Node* head, int k) {
        int stopCount = countNodes(head) - k - 1;
        Node* prev = nullptr;
        Node* temp = head;
        int count  = 0;
        while (temp != nullptr)
        {
            if (count == stopCount)
            {
                break;
            }
            count++;
            prev = temp;
            temp = temp -> next;
        }
        if (prev == nullptr)
        {
            head = head -> next;
            delete temp;
            return head;
        }
        prev -> next = temp -> next;
        delete temp;
        return head;
    }
};
