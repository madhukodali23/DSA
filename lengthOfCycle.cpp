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
    int lengthOfCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        int count = 1;
        while (fast != nullptr && fast -> next != nullptr)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if (slow == fast)
            {
                slow = slow -> next;
                while (slow != fast)
                {
                    count++;
                    slow = slow -> next;
                }
                return count;
            }
        }
        return 0;
    }

};
