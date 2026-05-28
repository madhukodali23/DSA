#include<bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node* down;
    Node(int value=0, Node* address1=NULL, Node* address2=NULL) {
        data = value;
        next = address1;
        down = address2;
    }
};
*/
class solution {
public:
    Node* merge(Node* head1, Node* head2)
    {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* dummy = new Node(0);
        Node* curr = dummy;
        while (temp1 && temp2)
        {
            if (temp1 -> data  <= temp2 -> data)
            {
                curr -> down = temp1 ;
                temp1 = temp1 -> down;
            }
            else 
            {
                curr -> down = temp2;
                temp2 = temp2 -> down;
            }
            curr = curr -> down;
        }
        if (temp1) curr -> next = temp1;
        else curr -> next = temp2;
        return dummy -> next;
    }
    Node* flattenLL(Node* head) {
        if (!head) return head;
        Node* temp1 = head;
        Node* temp2;
        if (head -> next)  temp2 = head -> next;
        while (temp2)
        {
            Node* next = temp2 -> next;
            temp1 = merge(temp1, temp2);
            temp2 = next;
        }
        return temp1;
    }
};
