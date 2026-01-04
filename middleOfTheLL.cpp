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
    Node* middleOfTheLL(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast -> next != nullptr)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }

};
