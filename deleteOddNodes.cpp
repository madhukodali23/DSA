#include <bits/stdc++.h>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};
*/
class solution{
public:
    Node* deleteOddNodes(Node* head) {
       Node* prev;
       Node* next;
       Node* curr = head;
       while (curr)
       {
           prev = curr -> prev;
           next = curr -> next;
           if (curr -> data % 2 != 0)
           {
               if (curr == head)
               {
                   head = head -> next;
               }
               if (prev) prev -> next = next;
               if (next) curr -> prev = prev;
               delete curr;
           }
           curr = next;
       }
       return head;
    }
};
