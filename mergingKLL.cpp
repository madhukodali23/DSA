#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node(int data, Node* next) : data(data), next(next) {}
    Node(int data) : data(data), next(nullptr) {}
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
            if (temp1 -> data <= temp2 -> data)
            {
                curr -> next = temp1;
                temp1 = temp1 -> next;
            }
            else 
            {
                curr -> next = temp2;
                temp2 = temp2 -> next;
            }
            curr = curr -> next;
        }
        if (temp1) curr -> next = temp1;
        else curr -> next = temp2;
        return dummy -> next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        Node* temp1 = merge(arr[0], arr[1]);
        Node* temp2 = merge(temp1, temp2);
        return temp2;
    }
};
