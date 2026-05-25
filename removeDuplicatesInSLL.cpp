#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};*/
class solution{
public:
    Node* removeDuplicates(Node* head) {
        Node* dummy = new Node(0);
        dummy -> next = head;
        Node* curr = head;
        Node* prev = dummy;
        while (curr)
        {
            if (curr -> next && curr -> data  == curr -> next -> data)
            {
                while (curr -> next && curr -> data == curr -> next -> data)
                {
                    curr = curr -> next;
                }
                prev -> next = curr -> next;
            }
            else 
            {
                prev = prev -> next;
            }
            curr = curr -> next;
        }
        return dummy -> next;
    }
};
