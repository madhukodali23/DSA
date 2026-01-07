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
    Node* reverseLL(Node* head)
    {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr)
        {
            Node* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* add1ToLL(Node* head) {
        Node* rhead = reverseLL(head);
        Node* prev = nullptr;
        Node* temp = rhead;
        int carry = 1;
        while (temp != nullptr)
        {
            int sum = temp -> data + carry;
            int lastDigit = sum % 10;
            temp -> data = lastDigit;
            carry = sum / 10;
            prev = temp;
            temp = temp -> next;
        }
        if (carry != 0) 
        {
            Node* n = new Node(carry);
            prev -> next = n;
        }
        return reverseLL(rhead);
    }
};
