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
    Node* reverseLL(Node* head) {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = head -> next;
        while (curr != nullptr)
        {
            if (curr != nullptr) curr -> next = prev;
            prev = curr;
            curr = next;
           if (next != nullptr) next = next -> next;
        }
        return prev;
    }
}; 
