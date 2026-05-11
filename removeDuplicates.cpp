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
    Node* removeDuplicates(Node* head) {
        Node* prev;
        Node* curr = head;
        Node* next;
        int x = -1;
        while (curr)
        {
            prev = curr -> prev;
            next = curr -> next;
            if (prev)  x = prev -> data;
            if (curr -> data == x)
            {
                if(prev) prev -> next = next;
                if(next) next -> prev = prev;
                delete curr;
            }
            curr = next;
        }
        return head;
    }
};
