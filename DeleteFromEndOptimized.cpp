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
    Node* DeleteKthNodeFromEnd(Node* head, int k) {
        Node* front = head;
        Node* back = head;
        for(int i=1;i<=k+1;i++)
        {
            front = front -> next;
        }
        if (front == nullptr)
        {
            Node* n = head;
            head = head -> next;
            delete n;
            return head;
        }
        while (front -> next != nullptr)
        {
            front = front -> next;
            back = back -> next;
        }
        Node* n = back -> next;
        back -> next = back -> next -> next;
        delete n;
        return head;
    }
};
